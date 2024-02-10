#ifndef RASAL_SENSOR_H
#define RASAL_SENSOR_H

#include "rasal.h"
#include "<pybind11/pybind11.h>"

RASAL_NAMESPACE_OPEN_SCOPE

class Sensor
{
    private:
        int width;
        int height;
    public:
        Sensor(int width, int height);
        float get_aspect_ratio();
        ~Sensor();
};

RASAL_NAMESPACE_CLOSE_SCOPE

PYBIND11_MODULE(RASAL_NS, m) {
    pybind11::class_<Sensor>(m, "Sensor")
        .def("get_aspect_ratio", &Sensor::get_aspect_ratio);
}

#endif // RASAL_SENSOR_H
