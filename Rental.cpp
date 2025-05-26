#include "Rental.h"
#include "User.h"
#include "Bike.h"

Rental::Rental(User* user, Bike* bike) : user_(user), bike_(bike) {}

const User* Rental::GetUser() const {
    return user_;
}

const Bike* Rental::GetBike() const {
    return bike_;
}

std::string Rental::GetBikeDisplayInfo() const {
    return bike_->GetBikeId() + " " + bike_->GetModel();
} 