cmake_minimum_required(VERSION 3.10)

project(KEY_VALUE_STORE)

file(GLOB_RECURSE SOURCES src/*.cpp)

add_executable(start_kvstore ${SOURCES})
