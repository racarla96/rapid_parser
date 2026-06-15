# rapid_parser

Entorno headless (sin ventana/GUI) para parsear RAPID con ANTLR4 + C++17,
listo para VS Code Dev Containers.

## TODOs

- [ ] Definir variables que ya vienen predefinidas en el sistema, tipo v1500, ejemplo.

## Estructura

```
rapid_parser/
├── .devcontainer/
│   ├── Dockerfile
│   └── devcontainer.json
├── CMakeLists.txt
├── Rapid.g4          <- gramática ANTLR4 para RAPID
├── main.cpp          <- driver: parsea un .mod y ejecuta el intérprete
├── Value.hpp         <- tipo dinámico num/bool/string/array del intérprete
├── Environment.hpp   <- scope de variables (case-insensitive, con padre)
├── Interpreter.hpp   <- declaración del intérprete (tree-walking)
├── Interpreter.cpp   <- implementación del intérprete
├── examples/
│   └── sample.mod
├── cmake/             <- módulos oficiales ExternalAntlr4Cpp / FindANTLR
└── tools/             <- (opcional) tu propio antlr-4.13.2-complete.jar
```

## Qué se eliminó respecto a la versión "Scene" original

Esta versión está pensada solo para análisis léxico/sintáctico de RAPID, sin
salida gráfica:

- Sin CImg, sin dependencias de X11/Xrandr/Xext/etc.
- Sin OpenCV/JPEG/PNG/TIFF/ZLIB/FFTW/etc. (todo ese bloque de `CMakeLists.txt`
  estaba ahí solo para CImg).
- Sin `Scene.g4`, `Scene.h/.cpp`, `ImageVisitor.*`, `input.scene`.
- `Dockerfile` y `devcontainer.json` ya no montan `/tmp/.X11-unix` ni definen
  `DISPLAY`.

Lo que queda es justo lo necesario para: Java (tool ANTLR) + toolchain C++ +
runtime ANTLR4 C++ + tu gramática `Rapid.g4`.

## Listo para usar

`cmake/ExternalAntlr4Cpp.cmake` y `cmake/FindANTLR.cmake` ya están incluidos
(copiados sin modificar desde
https://github.com/gabriele-tomassetti/antlr-cpp/tree/master/cmake), y el
jar `antlr-4.13.2-complete.jar` se descarga durante el build de la imagen
Docker a `/opt/antlr/`. `CMakeLists.txt` lo usa automáticamente si no existe
un `tools/antlr-4.13.2-complete.jar` propio en el proyecto.

## Build

```bash
mkdir build && cd build
cmake -G Ninja ..   # primer build: descarga y compila el runtime ANTLR4 C++ (tarda)
ninja
./rapid_parser ../examples/sample.mod              # parsea y ejecuta PROC main
./rapid_parser ../examples/sample.mod --tree       # + árbol de parseo
./rapid_parser ../examples/sample.mod --no-run     # solo parsear (sin ejecutar)
./rapid_parser ../examples/sample.mod --entry=Foo  # ejecuta PROC Foo en vez de main
```

La primera ejecución de `cmake` también invoca el jar de ANTLR para generar
`RapidLexer.*`, `RapidParser.*`, `RapidBaseVisitor.*`, etc. dentro de
`generated/`.

## VS Code

Abre la carpeta en VS Code → "Reopen in Container" (extensión *Dev
Containers*). La extensión `mike-lischke.vscode-antlr4` ya está configurada
para regenerar el lexer/parser en `generated/` cada vez que guardes
`Rapid.g4`.

Para regenerar manualmente sin CMake:
```bash
java -jar tools/antlr-4.13.2-complete.jar -Dlanguage=Cpp -no-listener -visitor -o generated Rapid.g4
```

## Sobre `Rapid.g4`

Es un punto de partida basado en la estructura del `MANUAL_RAPID.pdf`
(módulos, rutinas, declaraciones de datos, instrucciones, expresiones).
Limitaciones conocidas a refinar:

- RAPID es **case-insensitive** para identificadores/palabras reservadas;
  la gramática actual trata las keywords como sensibles a mayúsculas.
- La sintaxis de parámetros (`\Switch`, argumentos opcionales/condicionales)
  está simplificada.
- Las llamadas a procedimiento usan una regla genérica `argumentList`; no
  modela instrucciones concretas como `MoveAbsJ`, `TPWrite`, etc.
  individualmente.

`main.cpp` imprime el stream de tokens y el árbol de parseo de
`examples/sample.mod` como punto de partida para escribir un Visitor propio
(por ejemplo, para alimentar tu IDE/emulador RAPID).

## Intérprete RAPID (`Interpreter.hpp` / `Interpreter.cpp`)

Sobre el árbol de parseo se ejecuta un **intérprete tree-walking** completo:
expresiones, `VAR`/`PERS`/`CONST`, `IF`/`ELSEIF`/`ELSE`, `FOR`/`STEP`,
`WHILE`, `TEST`/`CASE`/`DEFAULT`, `GOTO`/etiquetas, `RETURN`/`EXIT`, llamadas
a `PROC`/`FUNC` con parámetros posicionales/nombrados/`\switch`, y una **pila
de ejecución** (`Interpreter::callStack()`) con guarda de profundidad
(`kMaxCallDepth = 250`) para detectar recursión infinita.

Por defecto, `rapid_parser archivo.mod` busca `PROC main` (insensible a
mayúsculas) y lo ejecuta. Usa `--entry=Nombre` para otro punto de entrada,
o `--no-run` para solo comprobar que el archivo parsea.

### Tipos y valores (`Value.hpp`)

Todo valor en tiempo de ejecución es `rapid::Value`, con 5 variantes:
`Undefined`, `Num` (double), `Bool`, `String`, `Array`. Los `RECORD`/arrays
de RAPID (`jointtarget`, `robtarget`, `speeddata`, `tooldata`, `wobjdata`,
literales `[...]`/`[[...],[...]]`) se representan **todos** como `Array`,
ya que el intérprete no conoce la disposición de campos de los `RECORD`.

### Variables (`Environment.hpp`)

Scopes encadenados, case-insensitive (RAPID no distingue mayúsculas en
identificadores). Cada llamada a `PROC`/`FUNC` crea un scope local cuyo
padre es el scope global (`PERS`/`CONST`/`VAR` de módulo), así que las
rutinas pueden leer y modificar globales por nombre sin declararlas
localmente.

### Instrucciones Move

`MoveAbsJ`/`MoveJ`/`MoveL`/`MoveC` evalúan sus argumentos (target(s),
`Speed`, `Zone`, `Tool`, y los switches opcionales `\V`/`\T`/`\Z`/`\WObj`/
`\Conc`) y los pasan a `Interpreter::onMove(name, MoveArgs)`. La
implementación por defecto imprime una línea de traza, p. ej.:

```
[Move] MoveAbsJ target=[[0,10,-20,0,30,0],[9e+09,9e+09,9e+09,9e+09,9e+09,9e+09]] speed=[...] zone=[...] tool=[...] wobj=[...]
```

`onMove` es `virtual`: una subclase puede sobreescribirlo para alimentar el
protocolo serie / IDE en lugar de solo trazar.

### Funciones/procedimientos predefinidos

`NumToStr`, `StrToNum`, `Abs`, `Sqrt`, `Round`, `Trunc`, `Present`, `Incr`,
`Decr` (funciones); `TPWrite`, `WaitTime` (procedimientos - `WaitTime` no
simula la espera real, solo registra que se alcanzó).

### Limitaciones conocidas

- **Sin acceso a campos `.field`** (`p.trans`, `p.rot`, ...): al no haber
  definiciones de tipo `RECORD`, una `variableReference` con `.` lanza un
  error claro indicando que se use `{índice}` en su lugar.
- **`PERS` declarado dentro de una rutina** se trata como un `VAR` local
  (se reinicializa en cada llamada), no como instancia única compartida.
- **`GOTO`/etiquetas**: solo soporta saltos a una etiqueta del mismo bloque
  de sentencias o de un bloque contenedor (no saltos *hacia dentro* de un
  bloque anidado).
- **`CONNECT`/`RAISE`/`RETRY`/`TRYNEXT`** y los `TRAP` (manejadores de
  error) no están modelados: `CONNECT`/`RETRY`/`TRYNEXT` solo emiten un
  aviso por `stderr` y continúan; `RAISE` lanza un error no manejado.
- **Declaraciones de array sin inicializador** (`VAR num v{10};`) reciben
  un valor escalar por defecto en lugar de un array del tamaño declarado.
- `DIV` usa redondeo hacia `-∞` (`floor`); `MOD` usa `fmod` de C++.

### Aviso sobre la verificación de compilación

`Interpreter.hpp`/`Interpreter.cpp` se verificaron con
`g++ -fsyntax-only -std=c++17 -Wall -Wextra` contra un *mock* local del API
generado por ANTLR4 (nombres de clases de contexto, accesores, campo `op`,
etc.), no contra el `RapidParser.h` real generado por el jar de ANTLR (no
disponible en este sandbox: `antlr.org`/`repo1.maven.org` están bloqueados).
`Value.hpp`/`Environment.hpp` sí se compilaron y ejecutaron con un test real
(aritmética, comparaciones, arrays anidados, scopes). Si al compilar en tu
devcontainer (con el `generated/RapidParser.h` real) aparece algún error de
accesor (p. ej. un nombre de método distinto al esperado), es casi seguro
algo puntual y fácil de corregir - compárte el mensaje de `g++` y lo
ajustamos contra el `RapidParser.h` real.