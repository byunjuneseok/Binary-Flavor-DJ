# Target name
set(target Bfdj)

# Find packages
find_package(OpenGL REQUIRED)
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    find_package(glfw3 REQUIRED)
    find_package(OpenAL REQUIRED)
endif()

# Includes
include_directories(${CMAKE_SOURCE_DIR}/Includes)

# Includes
include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../Libraries
)


# Sources
file(GLOB_RECURSE headers
        ${CMAKE_SOURCE_DIR}/Includes/*.h)

file(GLOB_RECURSE sources
        ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)


# Build executable
add_executable(${target}
        ${sources} main.cpp)

target_link_libraries(Bfdj Qt5::Widgets)


# Project options
set_target_properties(${target}
        PROPERTIES
        ${DEFAULT_PROJECT_OPTIONS}
        )

# Compile options
target_compile_options(${target}
        PRIVATE

        PUBLIC
        ${DEFAULT_COMPILE_OPTIONS}

        INTERFACE
        )
target_compile_definitions(${target}
        PRIVATE
        IMAGES_DIR="${CMAKE_SOURCE_DIR}/Assets/Images/"
        SOUNDS_DIR="${CMAKE_SOURCE_DIR}/Assets/Sounds/"
        )