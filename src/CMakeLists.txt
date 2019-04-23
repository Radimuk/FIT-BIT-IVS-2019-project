cmake_minimum_required(VERSION 3.0)

link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})

add_subdirectory(grammar)
add_subdirectory(gui)
add_subdirectory(math)

if (ENABLE_PROFILING)
	add_subdirectory(profiling)
endif()

add_executable(fit-calc main.cpp main.h)
target_link_libraries(fit-calc guiLib)

install(TARGETS fit-calc RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
install(FILES gui/fit-calc.desktop DESTINATION ${APPLICATIONS_DIR})
install(FILES gui/calculator_gui.glade DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/fit-calc/)
