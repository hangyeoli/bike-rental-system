#include "BikeManager.h"

// 자전거추가
void BikeManager::AddBike(std::unique_ptr<Bike> bike) {
    bikes_.push_back(std::move(bike));
}

// 자전거검색
Bike* BikeManager::FindBikeById(const std::string& bike_id) {
    for (auto& bike : bikes_) {
        if (bike->GetBikeId() == bike_id) {
            return bike.get();
        }
    }
    return nullptr;
}

// 자전거목록조회
const std::vector<std::unique_ptr<Bike> >& BikeManager::GetBikes() const {
    return bikes_;
} 