add_subdirectory(lens)

pybind11_add_module(rasal 
    rasal.cpp
    resolution.cpp
    sensor.cpp
)


target_compile_definitions(
    rasal
    PRIVATE resolution
    PRIVATE VERSION_INFO=${VERSION_INFO}
)
