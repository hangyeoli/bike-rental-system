#include "BikeManager.h"

void BikeManager::addBike(std::unique_ptr<Bike> bike) {
    bikes.push_back(std::move(bike));
}

Bike* BikeManager::findBikeById(const std::string& bikeId) {
    for (auto& bike : bikes) {
        if (bike->getBikeId() == bikeId) {
            return bike.get();
        }
    }
    return nullptr;
} 