cmake_minimum_required(VERSION 3.0.2)
project(env_lib CXX)

file(GLOB_RECURSE SRCS
		*.cpp)
add_library(env STATIC ${SRCS})
target_include_directories(env PUBLIC ./include)
