cmake_minimum_required(VERSION 3.0.2)
project(output_lib CXX)

file(GLOB_RECURSE SRCS
		*.cpp)
add_library(output STATIC ${SRCS})
target_include_directories(output PUBLIC ./include)
target_link_libraries(output env)
