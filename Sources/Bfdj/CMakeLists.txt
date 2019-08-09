# Target name
set(target Bfdj)

# Sources
file(GLOB_RECURSE headers ${CMAKE_SOURCE_DIR}/Includes/Bfdj/*.hpp)
file(GLOB_RECURSE sources ${CMAKE_SOURCE_DIR}/Sources/Bfdj/*.cpp)
file(GLOB_RECURSE common_sources
        ${headers}
        ${sources}
        )

# Includes
include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_SOURCE_DIR}}/Libraries
)

add_library(${target}
        ${common_sources}
        )

target_link_libraries(${target}
        Qt5::Widgets
        portaudio
        )