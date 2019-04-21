cmake_minimum_required(VERSION 3.0)

project(fit-calc)

include(GNUInstallDirs)

find_package(PkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

if(NOT CMAKE_BUILD_TOOL MATCHES "(msdev|devenv|nmake|MSBuild)")
    include(CheckCXXCompilerFlag)
    CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
    CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
    if(COMPILER_SUPPORTS_CXX11)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -std=c++11 -pthread")
    elseif(COMPILER_SUPPORTS_CXX0X)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -std=c++0x -pthread")
    else()
        message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
    endif()
endif()

if (DEFINED GLADE_FILE)
	add_definitions(-DGLADE_FILE="${GLADE_FILE}")
else ()
	add_definitions(-DGLADE_FILE="${CMAKE_CURRENT_SOURCE_DIR}/src/gui/calculator_gui.glade")
endif()

if(NOT APPLICATIONS_DIR)
	if (${CMAKE_INSTALL_FULL_BINDIR} MATCHES "^/usr")
		set(APPLICATIONS_DIR "/usr/share/applications")
	else()
		set(APPLICATIONS_DIR "~/.local/share/applications")
	endif()
endif()

if(NOT TARGET uninstall)
	configure_file("${CMAKE_CURRENT_SOURCE_DIR}/cmake/uninstall.cmake" "${CMAKE_CURRENT_BINARY_DIR}/cmake/uninstall.cmake" IMMEDIATE @ONLY)
	add_custom_target(uninstall COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake/uninstall.cmake)
endif()

set(ANTLR4_SRC ${CMAKE_SOURCE_DIR}/external/antlr4/runtime/Cpp)
add_subdirectory(${ANTLR4_SRC} antlr4 EXCLUDE_FROM_ALL)
include_directories(${ANTLR4_SRC}/runtime/src)

add_subdirectory(src)
add_subdirectory(tests)
