cmake_minimum_required (VERSION 2.6)
project (GameSceneTest)
set (CMAKE_CXX_STANDARD 11)
set (CMAKE_BINARY_DIR, "build")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY build)

if (UNIX)
     set (CMAKE_CXX_FLAGS "-g3 -Wall -O0")
endif () 

include_directories (include)
file(GLOB SOURCES "src/*.cpp")

add_executable(GameSceneTest ${SOURCES})
