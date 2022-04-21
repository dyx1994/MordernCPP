# specify cmake version
cmake_minimum_required(VERSION 3.10.2) # Mandatory .

# specify project name
project(task_2)

# use c ++17.
set(CMAKE_CXX_STANDARD 17)

# set root path for the program
set(ROOTPATH "/home/dyx/MordernCPP/homework/homework1/task_2" )

# tell cmake where to look for *.hpp , *.h files
include_directories(include/)

# add src as subdirectory
add_subdirectory(src)

# add executable main
add_executable(main ${ROOTPATH}/src/main.cpp) # main.o

# tell the linker to bind these objects together
target_link_libraries(main ipb_arithmetic) # ./ main

# set the installation path
set(CMAKE_INSTALL_PREFIX ${ROOTPATH}/install/)

# install executable file main to bin directory
install (TARGETS main DESTINATION bin)

# install public header files to include directory
install (DIRECTORY ${CMAKE_SOURCE_DIR}/include/ 
            DESTINATION include 
            FILES_MATCHING PATTERN "*.h*")