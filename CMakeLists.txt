cmake_minimum_required(VERSION 3.1.0)

project(Binaryflavordj)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)

# Set output directories
set(DEFAULT_CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

# Create code from a list of Qt designer ui files
# set(CMAKE_AUTOUIC ON)

# Find the Qt library
find_package(Qt5Widgets CONFIG REQUIRED)
find_package(Qt5Test REQUIRED)


include_directories(Includes/Bfdj)
include_directories(Libraries)
include_directories(Libraries/googletest/googletest/include)

# Add subdirectory
add_subdirectory(Sources/Bfdj)
add_subdirectory(Tests/UnitTests)
add_subdirectory(Libraries/googletest)
add_subdirectory(Extensions/BfdjGUI)

