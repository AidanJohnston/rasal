#ifndef RASAL_H_
#define RASAL_H_

#include <set>
#include <string>

#define RASAL_NS rasal
#define RASAL_NAMESPACE_OPEN_SCOPE namespace RASAL_NS {
#define RASAL_NAMESPACE_CLOSE_SCOPE }

RASAL_NAMESPACE_OPEN_SCOPE

class Rasal {

    private:
        // std::set<Sensor> sensors;
        // std::set<Resolution> resolutions;

    public:
        Rasal();
        // Rasal(std::string file_path);
        // static Rasal BuildFromFile();
        std::string Save(std::string file_path);
        // void AddSensor(Sensor &sensor);
        // void AddResolution(Resolution &res);
};

RASAL_NAMESPACE_CLOSE_SCOPE

#endif // RASAL_HPP_
