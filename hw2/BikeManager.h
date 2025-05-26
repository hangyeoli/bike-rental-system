#ifndef BIKEMANAGER_H
#define BIKEMANAGER_H

#include <vector>
#include <memory>
#include "Bike.h"

class BikeManager {
private:
    std::vector<std::unique_ptr<Bike>> bikes;

public:
    void addBike(std::unique_ptr<Bike> bike);
    Bike* findBikeById(const std::string& bikeId);
};

#endif 