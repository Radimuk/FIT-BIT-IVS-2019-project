cmake_minimum_required(VERSION 3.0)

project(fit-calc-tests)

enable_testing()
find_package(GTest QUIET)

if (NOT GTest_FOUND)
	add_subdirectory(${CMAKE_SOURCE_DIR}/external/googletest googletest)
	set(GTEST_BOTH_LIBRARIES gtest gtest_main)
else(NOT GTest_FOUND)
	include_directories(${GTEST_INCLUDE_DIRS})
endif(NOT GTest_FOUND)

add_executable(tests main.cpp math/GenericMathLibTest.cpp math/TrigonometricMathLibTest.cpp math/PercentageMathLibTest.cpp)
target_link_libraries(tests ${GTEST_BOTH_LIBRARIES} genericMathLib percentageMathLib trigonometricMathLib)
