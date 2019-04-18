cmake_minimum_required(VERSION 3.0)

file(GLOB grammar_SRC "*.h" "*.cpp")

add_library(grammarLib ${grammar_SRC})
target_link_libraries(grammarLib mathLib antlr4_static)
