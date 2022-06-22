cmake_minimum_required(VERSION 3.0.2)
project(param_lib CXX)

file(GLOB_RECURSE SRCS
		*.cpp)
add_library(param INTERFACE)
target_include_directories(param INTERFACE ./include)
