cmake_minimum_required(VERSION 3.4...3.26)
project(rasal LANGUAGES CXX)


include(FetchContent)
FetchContent_Declare(
    pybind11
    GIT_REPOSITORY https://github.com/pybind/pybind11.git
    GIT_TAG        v2.11.1
)

FetchContent_MakeAvailable(pybind11)


add_subdirectory(src/rasal)
