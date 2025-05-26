#ifndef REGISTERBIKE_H
#define REGISTERBIKE_H

#include <string>

class BikeManager;
class RegisterBikeUI;

class RegisterBike {
private:
    BikeManager* bikeManager;
    RegisterBikeUI* registerBikeUI;

public:
    RegisterBike(BikeManager* bikeManager, RegisterBikeUI* registerBikeUI);
    void registerBike(const std::string& bikeId, const std::string& model);
};

#endif 