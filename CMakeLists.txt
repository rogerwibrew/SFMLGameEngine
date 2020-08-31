cmake_minimum_required(VERSION 3.17)
project(GameEngine)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)

add_executable(GameEngine_run ${SOURCE_FILES})
include_directories(GameEngine_lib)

add_subdirectory(GameEngine_lib)

target_link_libraries(GameEngine_run GameEngine_lib)

add_subdirectory(GameEngine_tests)
