#include "RentBike.h"
#include "BikeManager.h"
#include "RentalManager.h"
#include "Bike.h"
#include "User.h"
#include "Rental.h"
#include "RentBikeUI.h"
#include <memory>

RentBike::RentBike(BikeManager* bikeManager, RentalManager* rentalManager, RentBikeUI* rentBikeUI)
    : bikeManager(bikeManager), rentalManager(rentalManager), rentBikeUI(rentBikeUI) {}

void RentBike::rentBike(const std::string& bikeId, User* user) {
    Bike* bike = bikeManager->findBikeById(bikeId);
    if (bike && bike->isAvailable()) {
        bike->rent(user);
        auto rental = std::make_unique<Rental>(user, bike);
        rentalManager->addRental(std::move(rental));
        rentBikeUI->showRentResult(bikeId, bike->getModel());
    }
} 