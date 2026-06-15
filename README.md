# rapid_parser

Entorno headless (sin ventana/GUI) para parsear RAPID con ANTLR4 + C++17,
listo para VS Code Dev Containers.

## Estructura

```
rapid_parser/
├── .devcontainer/
│   ├── Dockerfile
│   └── devcontainer.json
├── CMakeLists.txt
├── Rapid.g4          <- gramática ANTLR4 para RAPID (punto de partida)
├── main.cpp          <- driver: lexea + parsea un .mod y muestra el árbol
├── examples/
│   └── sample.mod
├── cmake/             <- (rellenar, ver abajo)
└── tools/             <- (rellenar, ver abajo)
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

## Antes de compilar: dos cosas que debes copiar

1. **`cmake/ExternalAntlr4Cpp.cmake`** y **`cmake/FindANTLR.cmake`**
   Son los módulos CMake oficiales que (a) descargan y compilan el runtime
   C++ de ANTLR4 desde GitHub, y (b) definen la macro `antlr_target(...)`
   que llama a Java para generar el lexer/parser desde `Rapid.g4`.
   Cópialos sin modificar desde:
   - https://github.com/gabriele-tomassetti/antlr-cpp/tree/master/cmake
   - o desde el repo oficial: https://github.com/antlr/antlr4/tree/master/runtime/Cpp/cmake

2. **`tools/antlr-4.13.2-complete.jar`**
   El jar de la herramienta ANTLR (requiere Java 11+). Descárgalo con:
   ```bash
   wget -P tools https://www.antlr.org/download/antlr-4.13.2-complete.jar
   ```
   Si usas otra versión, actualiza también `ANTLR_EXECUTABLE` en
   `CMakeLists.txt`.

## Build

```bash
mkdir build && cd build
cmake -G Ninja ..   # primer build: descarga y compila el runtime ANTLR4 C++ (tarda)
ninja
./rapid_parser ../examples/sample.mod
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
