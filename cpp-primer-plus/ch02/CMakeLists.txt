cmake_minimum_required(VERSION 3.0)
project(ch02)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(math STATIC src/math.cpp)
include_directories(include)

add_executable(adder main.cpp)
target_link_libraries(adder PRIVATE math)

