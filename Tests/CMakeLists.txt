# Target name
set(target UnitTests)

# Sources
file(GLOB_RECURSE headers ${CMAKE_SOURCE_DIR}/Includes/*.h)
file(GLOB_RECURSE sources ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
file(GLOB_RECURSE test_sources
        ${headers}
        ${sources}
        )

# Includes
include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../Libraries
)
# Build executable
add_executable(${target}
        ${test_sources}
        )


# Link libraries
target_link_libraries(${target}
        Qt5::Widgets
        gtest
        )
