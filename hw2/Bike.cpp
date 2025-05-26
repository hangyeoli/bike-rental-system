#include "Bike.h"
#include "User.h"

Bike::Bike(const std::string& bikeId, const std::string& model)
    : bikeId(bikeId), model(model), available(true), currentUser(nullptr) {}

std::string Bike::getBikeId() const {
    return bikeId;
}

std::string Bike::getModel() const {
    return model;
}

bool Bike::isAvailable() const {
    return available;
}

void Bike::rent(User* user) {
    available = false;
    currentUser = user;
}

void Bike::returnBike() {
    available = true;
    currentUser = nullptr;
}

User* Bike::getCurrentUser() const {
    return currentUser;
} 