#include <pybind11/pybind11.h>

#include <string>

#include "rasal.hpp"
#include "resolution.hpp"
#include "sensor.hpp"

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

RASAL_NAMESPACE_OPEN_SCOPE

Rasal::Rasal() {}

Rasal
Rasal::BuildFromFile() {
    return Rasal();
}

Rasal
Rasal::BuildFromDict() {
    return Rasal();
}

std::string
Rasal::Save(std::string) {
    return "";
}

PYBIND11_MODULE(rasal, m) {
    m.doc() = R"pbdoc(Resolution and Sensors and Lens.
         _____             _____         _      
        |  __ \     /\    / ____|  /\   | |     
        | |__) |   /  \  | (___   /  \  | |     
        |  _  /   / /\ \  \___ \ / /\ \ | |     
        | | \ \  / ____ \ ____) / ____ \| |____ 
        |_|  \_\/_/    \_\_____/_/    \_\______|
    )pbdoc";

    pybind11::class_<Rasal>(m, "Rasal")
        .def_static(
            "build_from_file",
            &Rasal::BuildFromFile,
            R"pbdoc(Build a rasal from a file.)pbdoc"
        );

    pybind11::class_<Resolution>(m, "Resolution")
        .def(
            pybind11::init<>(),
            R"pbdoc(Initilze a Resolution)pbdoc"
        );
    
    pybind11::class_<Sensor>(m, "Sensor")
        .def(
            pybind11::init<int, int>(), 
            pybind11::arg("width"),
            pybind11::arg("height"),
            R"pbdoc(Initilize a Sensor.)pbdoc"
        )
        .def(
            "get_aspect_ratio",
            &Sensor::GetAspectRatio,
            R"pbdoc(Get the sensors aspect ratio)pbdoc"
        );
    

#ifdef VERSION_INFO
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
    m.attr("__version__") = "dev";
#endif
}

RASAL_NAMESPACE_CLOSE_SCOPE