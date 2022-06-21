cmake_minimum_required(VERSION 3.0.2)
project(XCS CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "-std=c++17 -Wall")
set(SRCS
    ${PROJECT_SOURCE_DIR}/main.cpp)
add_executable(run ${SRCS})
target_link_libraries(src)
