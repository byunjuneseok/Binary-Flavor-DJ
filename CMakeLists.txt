cmake_minimum_required(VERSION 3.1.0)

project(Binaryflavordj)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
# set(CMAKE_AUTOUIC ON)

# Find the Qt library
find_package(Qt5Widgets CONFIG REQUIRED)
find_package(Qt5Test REQUIRED)

include_directories(Includes/Bfdj)
include_directories(Libraries)
include_directories(Libraries/googletest/googletest/include)

# Add subdirectory
add_subdirectory(Sources)
add_subdirectory(Tests)
add_subdirectory(Libraries/googletest)

# Add libraries
