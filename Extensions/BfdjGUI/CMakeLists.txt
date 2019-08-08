# Target name
set(target BfdjGUI)

# Sources
file(GLOB_RECURSE sources ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

# Includes
include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../Libraries
)

add_executable(${target}
        ${sources}
        )

target_link_libraries(${target}
        Qt5::Widgets
        Bfdj
        )