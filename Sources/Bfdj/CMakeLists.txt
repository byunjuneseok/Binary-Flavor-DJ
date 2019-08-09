# Target name
set(target Bfdj)

# Sources
file(GLOB_RECURSE headers ${CMAKE_SOURCE_DIR}/Includes/Bfdj/*.hpp)
file(GLOB_RECURSE sources ${CMAKE_SOURCE_DIR}/Sources/Bfdj/*.cpp)
file(GLOB_RECURSE common_sources
        ${headers}
        ${sources}
        )

file(GLOB_RECURSE portaudio_cpp_bindings_headers
        ${CMAKE_SOURCE_DIR}/Libraries/portaudio/bindings/cpp/include/portaudiocpp/*.hxx
        )

file(GLOB_RECURSE portaudio_cpp_bindings_sources
        ${CMAKE_SOURCE_DIR}/Libraries/portaudio/bindings/cpp/source/portaudiocpp/*.cxx
        )

file(GLOB_RECURSE portaudio_cpp_bindings_common_sources
        ${portaudio_cpp_bindings_headers}
        ${portaudio_cpp_bindings_sources}
        )

# Includes
include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_SOURCE_DIR}}/Libraries
        ${CMAKE_SOURCE_DIR}/Libraries/portaudio/bindings/cpp/include
)

add_library(${target}
        ${common_sources}
        ${portaudio_cpp_bindings_common_sources}
        )

target_link_libraries(${target}
        Qt5::Widgets
        portaudio
        )