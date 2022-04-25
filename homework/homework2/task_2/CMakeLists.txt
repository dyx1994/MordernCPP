# minimum cmake version
cmake_minimum_required(VERSION 3.10.2)
# set project name
project(task_2)
# set cxx standard
set(CMAKE_CXX_STANDARD 17)
# set rootpath
set(ROOTPATH "/home/dyx/MordernCPP/homework/homework2/task_2")
# tell where to find include directory
include_directories(/include)
# add subdirectory src
add_subdirectory(src)

add_executable(main ${ROOTPATH}/src/main.cpp)


# tell the linker to bind these objects together
target_link_libraries(main calculation) # ./ main

# set the installation path
set(CMAKE_INSTALL_PREFIX ${ROOTPATH}/install/)

# install executable file main to bin directory
install (TARGETS main DESTINATION bin)

# install public header files to include directory
install (DIRECTORY ${CMAKE_SOURCE_DIR}/include/ 
            DESTINATION include 
            FILES_MATCHING PATTERN "*.h*")