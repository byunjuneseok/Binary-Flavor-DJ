# Target name
set(target BfdjGUI)

# Sources
file(GLOB_RECURSE bfdjgui_headers ${CMAKE_CURRENT_SOURCE_DIR}/Includes/*.hpp)
file(GLOB_RECURSE bfdjgui_sources ${CMAKE_CURRENT_SOURCE_DIR}/Sources/*.cpp)
file(GLOB_RECURSE bfdjgui_common_sources
        ${bfdjgui_headers}
        ${bfdjgui_sources}
        )

# Includes
include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/Includes
)


add_executable(${target}
        ${bfdjgui_common_sources}
        )

target_link_libraries(${target}
        PRIVATE
        Qt5::Widgets
        portaudio
        Bfdj
        )

