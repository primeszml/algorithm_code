cmake_minimum_required(VERSION 3.20)
project(AlgorithmPractice)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2")

# 递归扫描整个项目下的 cpp 文件
file(GLOB_RECURSE CPP_FILES
        ${PROJECT_SOURCE_DIR}/*.cpp
)

# 可选：排除 CMake 自动生成目录
list(FILTER CPP_FILES EXCLUDE REGEX ".*/cmake-build-.*")

foreach(file ${CPP_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file}
            buaa_cs/unprimes_seg.cpp
            buaa_cs/unprimes_seg.cpp
            buaa_cs/unprimes_seg.cpp)
endforeach()
