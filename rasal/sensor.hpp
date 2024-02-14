#ifndef RASAL_SENSOR_HPP_
#define RASAL_SENSOR_HPP_

#include "rasal.hpp"

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

#endif // RASAL_SENSOR_HPP_
