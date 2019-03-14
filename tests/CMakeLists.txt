cmake_minimum_required(VERSION 3.0)

project(fit-calc-tests)

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(tests main.cpp)
target_link_libraries(tests ${GTEST_BOTH_LIBRARIES})