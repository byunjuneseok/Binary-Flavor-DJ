set(target Binaryflavordj)

# Find packages
find_package(OpenGL REQUIRED)
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    find_package(glfw3 REQUIRED)
    find_package(OpenAL REQUIRED)
endif()

# Include
include_directories(${CMAKE_SOURCE_DIR}/Includes)
include_directories(${CMAKE_SOURCE_DIR}/Libraries/glfw/include)
include_directories(${CMAKE_SOURCE_DIR}/Libraries/imgui)
include_directories(${OPENGL_INCLUDE_DIR})

link_libraries(${OPENGL_LIBRARIES})
link_directories(${CMAKE_SOURCE_DIR}/Libraries/glfw/lib)


if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    link_libraries(glfw3)
else()
    link_libraries(glfw)
endif()


if (CMAKE_SYSTEM_NAME MATCHES "Windows")
    set(SFML_LIBRARIES_PATH ${CMAKE_SOURCE_DIR}/Libraries/SFML/lib/Windows)
    set(SFML_OPENAL_DEPENDENCIES openal32)
elseif (CMAKE_SYSTEM_NAME MATCHES "Linux")
    set(SFML_LIBRARIES_PATH ${CMAKE_SOURCE_DIR}/Libraries/SFML/lib/Linux)
    set(SFML_OPENGL_DEPENDENCIES GL)
    set(SFML_OPENAL_DEPENDENCIES openal)
elseif (CMAKE_SYSTEM_NAME MATCHES "Darwin")
    set(SFML_LIBRARIES_PATH ${CMAKE_SOURCE_DIR}/Libraries/SFML/lib/MacOS)
    set(SFML_OPENGL_DEPENDENCIES "-framework OpenGL")
    set(SFML_OPENAL_DEPENDENCIES ${OPENAL_LIBRARY})
endif()