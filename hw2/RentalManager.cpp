#include "RentalManager.h"
#include "User.h"

void RentalManager::addRental(std::unique_ptr<Rental> rental) {
    rentals.push_back(std::move(rental));
}

std::vector<Rental*> RentalManager::getRentalsByUser(User* user) {
    std::vector<Rental*> userRentals;
    for (auto& rental : rentals) {
        if (rental->getUser() == user) {
            userRentals.push_back(rental.get());
        }
    }
    return userRentals;
} 