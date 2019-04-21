cmake_minimum_required(VERSION 3.0)

link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})

add_subdirectory(grammar)
add_subdirectory(math)
add_subdirectory(profiling)

add_executable(fit-calc main.cpp main.h MainWindow.cpp MainWindow.h MenuBar.cpp MenuBar.h AboutDialog.cpp AboutDialog.h)
target_link_libraries(fit-calc ${GTKMM_LIBRARIES} m mathLib grammarLib antlr4_static)

install(TARGETS fit-calc RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
install(FILES gui/fit-calc.desktop DESTINATION ${APPLICATIONS_DIR})
install(FILES gui/calculator_gui.glade DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/fit-calc/)
