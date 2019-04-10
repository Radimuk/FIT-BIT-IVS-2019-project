cmake_minimum_required(VERSION 3.0)

file(GLOB grammar_SRC "*.h" "*.cpp")

add_library(grammarLib ${grammar_SRC})
add_dependencies(grammarLib antlr4_static)