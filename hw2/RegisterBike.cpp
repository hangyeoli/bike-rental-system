#include "RegisterBike.h"
#include "BikeManager.h"
#include "Bike.h"
#include "RegisterBikeUI.h"
#include <memory>

RegisterBike::RegisterBike(BikeManager* bikeManager, RegisterBikeUI* registerBikeUI)
    : bikeManager(bikeManager), registerBikeUI(registerBikeUI) {}

void RegisterBike::registerBike(const std::string& bikeId, const std::string& model) {
    auto bike = std::make_unique<Bike>(bikeId, model);
    bikeManager->addBike(std::move(bike));
    registerBikeUI->showRegisterResult(bikeId, model);
} 