#include <pybind11/pybind11.h>

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

/*
 *  _____             _____         _      
 * |  __ \     /\    / ____|  /\   | |     
 * | |__) |   /  \  | (___   /  \  | |     
 * |  _  /   / /\ \  \___ \ / /\ \ | |     
 * | | \ \  / ____ \ ____) / ____ \| |____ 
 * |_|  \_\/_/    \_\_____/_/    \_\______|
 *
 */

int add(int i, int j) {
    return i + j;
}

namespace py = pybind11;

PYBIND11_MODULE(rasal, m) {
    m.doc() = R"pbdoc(
        Resolution and Sensors and Lens.

         _____             _____         _      
        |  __ \     /\    / ____|  /\   | |     
        | |__) |   /  \  | (___   /  \  | |     
        |  _  /   / /\ \  \___ \ / /\ \ | |     
        | | \ \  / ____ \ ____) / ____ \| |____ 
        |_|  \_\/_/    \_\_____/_/    \_\______|
    )pbdoc";

    m.def("add", &add, R"pbdoc(
        Add two numbers

        Some other explanation about the add function.
    )pbdoc");

    m.def("subtract", [](int i, int j) { return i - j; }, R"pbdoc(
        Subtract two numbers

        Some other explanation about the subtract function.
    )pbdoc");

#ifdef VERSION_INFO
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
    m.attr("__version__") = "dev";
#endif
}