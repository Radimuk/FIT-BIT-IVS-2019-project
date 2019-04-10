cmake_minimum_required(VERSION 3.0)

set(ANTLR4_SRC ${CMAKE_SOURCE_DIR}/external/antlr4/runtime/Cpp)

add_subdirectory(${ANTLR4_SRC} antlr4)
include_directories(${ANTLR4_SRC}/runtime/src)

file(GLOB grammar_SRC "*.h" "*.cpp")

add_library(grammarLib ${grammar_SRC})
add_dependencies(grammarLib antlr4_static)