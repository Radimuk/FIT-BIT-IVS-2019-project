cmake_minimum_required(VERSION 3.0)

file(GLOB gui_SRC "*.h" "*.cpp")

add_library(guiLib ${gui_SRC})
target_link_libraries(guiLib ${GTKMM_LIBRARIES} grammarLib)
