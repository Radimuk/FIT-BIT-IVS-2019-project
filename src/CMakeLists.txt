cmake_minimum_required(VERSION 3.0)

link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})

add_executable(fit-calc main.cpp GenericMathLib.cpp GenericMathLib.h TrigonometricMathLib.cpp TrigonometricMathLib.h PercentageMathLib.cpp PercentageMathLib.h)
add_library(genericMathLib GenericMathLib.cpp GenericMathLib.h)
add_library(percentageMathLib PercentageMathLib.cpp PercentageMathLib.h)
add_library(trigonometricMathLib TrigonometricMathLib.cpp TrigonometricMathLib.h)
target_link_libraries(fit-calc ${GTKMM_LIBRARIES} m)
