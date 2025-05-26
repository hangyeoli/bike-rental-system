#include "RegisterBike.h"
#include "BikeManager.h"
#include "Bike.h"
#include "RegisterBikeUI.h"
#include <memory>

RegisterBike::RegisterBike(BikeManager* bike_manager, RegisterBikeUI* register_bike_ui)
    : bike_manager_(bike_manager), register_bike_ui_(register_bike_ui) {}

void RegisterBike::AddBike(const std::string& bike_id, const std::string& model) {
    auto bike = std::make_unique<Bike>(bike_id, model);
    bike_manager_->AddBike(std::move(bike));
    register_bike_ui_->ShowRegisterBikeResult(bike_id, model);
} 