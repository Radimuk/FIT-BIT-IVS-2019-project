cmake_minimum_required(VERSION 3.0)

add_executable(stddev profiling.cpp)
target_link_libraries(stddev m mathLib)
