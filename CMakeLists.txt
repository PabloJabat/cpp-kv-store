cmake_minimum_required(VERSION 3.10)

project(KEY_VALUE_STORE)

# Set the global C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SOURCES src/*.cpp)

add_executable(start_kvstore ${SOURCES})
