# Target name
set(target UnitTests)

# Sources
file(GLOB_RECURSE test_sources ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

# Includes
include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../Libraries
        ${common_sources}
)

# Build executable
add_executable(${target}
        ${test_sources}
        )


# Link libraries
target_link_libraries(${target}
        Bfdj
        Qt5::Widgets
        gtest
        )
