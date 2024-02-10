cmake_minimum_required(VERSION 3.4...3.18)
project(rasal)

add_subdirectory(../extern/pybind11)
pybind11_add_module(cmake_example rasal/rasal.cpp)

target_compile_definitions(
    cmake_example
    PRIVATE VERSION_INFO=${VERSION_INFO}
)
