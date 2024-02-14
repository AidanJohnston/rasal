#include "sensor.hpp"

RASAL_NAMESPACE_OPEN_SCOPE

Sensor::Sensor(int width, int height) {
    this->width = width;
    this->height = height;
}

float
Sensor::GetAspectRatio()
{
    return (float)this->width / (float)this->height;
}

RASAL_NAMESPACE_CLOSE_SCOPE
