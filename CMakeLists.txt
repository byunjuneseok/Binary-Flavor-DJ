# Minimum version of CMAKE.
cmake_minimum_required(VERSION 3.14)


# Declare project.
project(binary_flavor_dj)

# Set standard library.
set(CMAKE_CXX_STANDARD 14)

# Includes
include_directories(Includes)
include_directories(Libraries)

# Add executable.
add_executable(binary_flavor_dj Sources/main.cpp Includes/Sandbox/Windows.h Includes/Deck/Deck.h Includes/Mixer/Mixer.h)