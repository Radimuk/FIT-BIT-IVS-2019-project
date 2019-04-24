cmake_minimum_required(VERSION 3.0)

project(fit-calc-tests)

enable_testing()
find_package(GTest QUIET)

if (NOT GTest_FOUND)
	add_subdirectory(${CMAKE_SOURCE_DIR}/external/googletest googletest EXCLUDE_FROM_ALL)
	set(GTEST_BOTH_LIBRARIES gtest gtest_main)
else(NOT GTest_FOUND)
	include_directories(${GTEST_INCLUDE_DIRS})
endif(NOT GTest_FOUND)

set(MATH_TESTS math/GenericMathLibTest.cpp math/TrigonometricMathLibTest.cpp math/PercentageMathLibTest.cpp)
set(GRAMMAR_TESTS grammar/calculatorBaseVisitorTest.cpp)

add_executable(tests ${MATH_TESTS} ${GRAMMAR_TESTS})
target_link_libraries(tests ${GTEST_BOTH_LIBRARIES} mathLib grammarLib antlr4_static)
