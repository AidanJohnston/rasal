#include "rasal.h"
#include "sensor.h"

RASAL_NAMESPACE_OPEN_SCOPE

Sensor::Sensor (int width, int height) {
    width = width;
    height = height;
}

float
Sensor::get_aspect_ratio() {
    float ratio = width / height;
    return ratio;
}

RASAL_NAMESPACE_CLOSE_SCOPE
