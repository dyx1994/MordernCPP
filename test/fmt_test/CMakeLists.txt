cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

project(fmt_test)

set(ROOTPATH ${CMAKE_CURRENT_SOURCE_DIR})

#message(${ROOTPATH})

include_directories(/include)
#You can add the fmt library directory into your project and include it in your CMakeLists.txt file:
#add_subdirectory(fmt EXCLUDE_FROM_ALL)

# You can detect and use an installed version of {fmt} as follows:
#find_package(fmt)

# using FetchContent
include(FetchContent)

FetchContent_Declare(fmt
        URL https://github.com/fmtlib/fmt/archive/refs/tags/8.0.1.tar.gz)
FetchContent_MakeAvailable(fmt)

add_subdirectory(src)
add_executable(fmt_test ${ROOTPATH}/src/main.cpp)

target_link_libraries(fmt_test fmt::fmt MySum)
