cmake_minimum_required(VERSION 3.10.2) # Mandatory .
project(task_2)
# Mandatory .
set(CMAKE_CXX_STANDARD 17)
# Use c ++17.
# tell cmake where to look for *.hpp , *.h files
include_directories(include/)
# create library " libipb_arithmetic "
add_library(ipb_arithmetic ./src/subtract.cpp ./src/sum.cpp) # creates libipb_arithmetic.a
# add executable main
add_executable(main ./src/main.cpp) # main.o
# tell the linker to bind these objects together
target_link_libraries(main ipb_arithmetic) # ./ main
