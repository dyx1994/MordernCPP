cmake_minimum_required(VERSION 3.10.2)

project(task2)

set(CMAKE_CXX_STANDARD 17)

set(ROOTPATH "/home/dyx/MordernCPP/homework/homework2/task_1")

include_directories(/include)

add_subdirectory(src)

add_executable(main ${ROOTPATH}/src/main.cpp)


# tell the linker to bind these objects together
target_link_libraries(main libguess) # ./ main

# set the installation path
set(CMAKE_INSTALL_PREFIX ${ROOTPATH}/install/)

# install executable file main to bin directory
install (TARGETS main DESTINATION bin)

# install public header files to include directory
install (DIRECTORY ${CMAKE_SOURCE_DIR}/include/ 
            DESTINATION include 
            FILES_MATCHING PATTERN "*.h*")