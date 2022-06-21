file(GLOB_RECURSE SRCS
    *.cpp)
add_library(XCS STATIC ${SRCS})
target_include_directories(XCS PUBLIC ${PROJECT_SOURCE_DIR}/include)
