add_subdirectory(lens)

pybind11_add_module(rasal 
    sensor.h
    resolution.h
    rasal.h
    rasal.cpp
    resolution.cpp
    sensor.cpp
)


target_compile_definitions(
    rasal
    PRIVATE VERSION_INFO=${VERSION_INFO}
)
