#ifndef RASAL_HPP_
#define RASAL_HPP_

#define RASAL_NS rasal
#define RASAL_NAMESPACE_OPEN_SCOPE namespace RASAL_NS {
#define RASAL_NAMESPACE_CLOSE_SCOPE }

#include <set>
#include <string>

#include "sensor.hpp"
#include "resolution.hpp"

RASAL_NAMESPACE_OPEN_SCOPE

class Rasal {

    private:
        std::set<Sensor> sensors;
        std::set<Resolution> resolutions;

    public:
        Rasal();
        static Rasal BuildFromFile();
        static Rasal BuildFromDict();
        std::string Save(std::string file_path);
        void AddSensor(Sensor &sensor);
        void AddResolution(Resolution &resolution);
};

RASAL_NAMESPACE_CLOSE_SCOPE

#endif // RASAL_HPP_
