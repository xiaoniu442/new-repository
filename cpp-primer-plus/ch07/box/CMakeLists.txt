cmake_minimum_required(VERSION 3.0)
project(box)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)
add_library(Box STATIC src/Box.cpp)

add_executable(Boxtest main.cpp)
target_link_libraries(Boxtest PRIVATE Box)