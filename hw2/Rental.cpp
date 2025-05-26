#include "Rental.h"
#include "User.h"
#include "Bike.h"

Rental::Rental(User* user, Bike* bike) : user(user), bike(bike) {}

User* Rental::getUser() const {
    return user;
}

Bike* Rental::getBike() const {
    return bike;
}

std::string Rental::getBikeDisplayInfo() const {
    return bike->getBikeId() + " " + bike->getModel();
} 