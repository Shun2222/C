cmake_minimum_required(VERSION 3.0.2)
project(xcs_lib CXX)

file(GLOB_RECURSE SRCS
		*.cpp)
	add_library(xcs STATIC ${SRCS})
	target_include_directories(xcs PUBLIC ./include)
