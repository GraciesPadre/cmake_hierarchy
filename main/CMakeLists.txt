cmake_minimum_required(VERSION 3.14)
project(main)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC lib)

