cmake_minimum_required(VERSION 3.0.2)
project(subfiles_lib CXX)

file(GLOB_RECURSE SRCS
	*.cpp)
add_library(sub_files STATIC ${SRCS})
target_include_directories(sub_files PUBLIC ./include)
#set_target_properties(sub_files
#	PROPERTIES
#	VERSION ${PROJECT_VERSION})
