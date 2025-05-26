#include "Bike.h"
#include "User.h"

Bike::Bike(const std::string& bike_id, const std::string& model)
    : bike_id_(bike_id), model_(model), available_(true), current_user_(nullptr) {}

const std::string& Bike::GetBikeId() const {
    return bike_id_;
}

const std::string& Bike::GetModel() const {
    return model_;
}

bool Bike::IsAvailable() const {
    return available_;
}

void Bike::Rent(User* user) {
    available_ = false;
    current_user_ = user;
}

void Bike::ReturnBike() {
    available_ = true;
    current_user_ = nullptr;
}

const User* Bike::GetCurrentUser() const {
    return current_user_;
} 