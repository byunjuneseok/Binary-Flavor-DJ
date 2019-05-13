# Minimum version of CMAKE.
cmake_minimum_required(VERSION 3.9.2)

# Include cmake modules
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/CMake")

# Declare project.
project(Binaryflavordj)

# Set output directories
set(DEFAULT_CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

# Set enable output of compile commands during generation
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set standard library.
set(CMAKE_CXX_STANDARD 14)

# Includes
include_directories(Includes)
include_directories(Libraries)

# Project modules
add_subdirectory(Sources)

# Add executable.
add_executable(binary_flavor_dj Sources/main.cpp Includes/Hub/Hub.h Sources/Hub/Hub.cpp Sources/Modules/DeckModule.cpp Includes/Modules/Module.h)