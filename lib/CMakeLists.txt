cmake_minimum_required(VERSION 3.14)
project(lib)

add_library(${PROJECT_NAME} STATIC src/lib.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC include)

