#ifndef RASAL_SENSOR_H_
#define RASAL_SENSOR_H_

#include "rasal.h"

RASAL_NAMESPACE_OPEN_SCOPE

class Sensor
{
    private:
        int width;
        int height;
    public:
        Sensor(int width, int height);
        float GetAspectRatio ();
};

RASAL_NAMESPACE_CLOSE_SCOPE

#endif // RASAL_SENSOR_H_
