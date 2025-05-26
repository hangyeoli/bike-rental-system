#include "BikeManager.h"

void BikeManager::AddBike(std::unique_ptr<Bike> bike) {
    bikes_.push_back(std::move(bike));
}

Bike* BikeManager::FindBikeById(const std::string& bike_id) {
    for (auto& bike : bikes_) {
        if (bike->GetBikeId() == bike_id) {
            return bike.get();
        }
    }
    return nullptr;
}

const std::vector<std::unique_ptr<Bike> >& BikeManager::GetBikes() const {
    return bikes_;
} 