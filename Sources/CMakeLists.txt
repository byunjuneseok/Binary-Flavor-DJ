# Target name
set(target Bfdj)

# Sources
file(GLOB_RECURSE headers ${CMAKE_SOURCE_DIR}/Includes/*.h)
file(GLOB_RECURSE sources ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
file(GLOB_RECURSE common_sources
        "${CMAKE_SOURCE_DIR}/Includes/*.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
        )

add_executable(${CMAKE_PROJECT_NAME}
        ${common_sources}
        )

target_link_libraries(${CMAKE_PROJECT_NAME}
        Qt5::Widgets
        )