cmake_minimum_required(VERSION 3.7)
project("rapid_parser")

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# RAPID parser sources target C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# required when linking against the static ANTLR4 C++ runtime
add_definitions(-DANTLR4CPP_STATIC)
set(ANTLR4_WITH_STATIC_CRT OFF)

# --- ANTLR4 C++ runtime --------------------------------------------------
# Downloads + builds the official ANTLR4 C++ runtime (antlr/antlr4, master)
# on first configure. Module provided in cmake/ExternalAntlr4Cpp.cmake.
include(ExternalAntlr4Cpp)
include_directories(${ANTLR4_INCLUDE_DIRS})

# Path to the ANTLR tool jar, used to generate the lexer/parser from Rapid.g4.
# Prefer any antlr-*-complete.jar in tools/ (whatever version you placed
# there), otherwise fall back to the one baked into the dev container
# image at /opt/antlr/.
file(GLOB ANTLR_JAR_CANDIDATES "${CMAKE_CURRENT_SOURCE_DIR}/tools/antlr-*-complete.jar")
if(ANTLR_JAR_CANDIDATES)
  list(GET ANTLR_JAR_CANDIDATES 0 ANTLR_EXECUTABLE)
else()
  set(ANTLR_EXECUTABLE /opt/antlr/antlr-4.13.1-complete.jar)
endif()
find_package(ANTLR REQUIRED)

# --- Grammar --------------------------------------------------------------
antlr_target(RapidGrammar Rapid.g4 VISITOR OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/generated/)

include_directories(${PROJECT_SOURCE_DIR}
                     ${PROJECT_SOURCE_DIR}/generated/)

# --- Executable -------------------------------------------------------------
add_executable(rapid_parser
    main.cpp
    Interpreter.cpp
    ${ANTLR_RapidGrammar_CXX_OUTPUTS})

target_link_libraries(rapid_parser antlr4_static)

if (NOT WIN32)
    find_package(Threads REQUIRED)
    target_link_libraries(rapid_parser ${CMAKE_THREAD_LIBS_INIT})
endif()
