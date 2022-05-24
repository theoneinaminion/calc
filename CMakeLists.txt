cmake_minimum_required(VERSION 3.10)

# set the project name
project(Calculator)

#add library

add_library(MyLib calc.cpp calc.hpp)
add_library(MyLib1 rect.cpp rect.hpp)
target_link_libraries(MyLib1 MyLib)

# add the executable
add_executable(proj main.cpp)

target_link_libraries(proj PRIVATE MyLib1)
