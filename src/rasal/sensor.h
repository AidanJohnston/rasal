#ifndef RASAL_SENSOR_H
#define RASAL_SENSOR_H

#include "rasal.h"

RASAL_NAMESPACE_OPEN_SCOPE

class Sensor
{
    private:
        int width;
        int height;
    public:
        Sensor(int width, int height);
        float get_aspect_raito();
        ~Sensor();
};

RASAL_NAMESPACE_CLOSE_SCOPE

#endif // RASAL_SENSOR_H
