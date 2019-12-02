cmake_minimum_required(VERSION 3.0)

project(Lecture8_Demos CXX)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 14)

# the following options prevent compiler-optimization issues that are unwanted in an edu process
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

#### the list of targets ####
add_executable(ex1_misc ex1_misc/main.cpp)
add_executable(ex2_map ex2_map/main.cpp)
add_executable(ex3_remove_from_vec 
    ex3_remove_from_vec/main.cpp
    common/vect_utils.h
    common/vect_utils.cpp)
