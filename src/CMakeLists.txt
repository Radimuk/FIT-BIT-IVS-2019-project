cmake_minimum_required(VERSION 3.0)

link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})

add_executable(fit-calc main.cpp main.h MainWindow.cpp MainWindow.h)
target_link_libraries(fit-calc ${GTKMM_LIBRARIES})
