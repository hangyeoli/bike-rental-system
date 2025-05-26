#include "RentalManager.h"
#include "User.h"

void RentalManager::AddRental(std::unique_ptr<Rental> rental) {
    rentals_.push_back(std::move(rental));
}

std::vector<const Rental*> RentalManager::GetRentalsByUser(const User* user) const {
    std::vector<const Rental*> user_rentals;
    for (const auto& rental : rentals_) {
        if (rental->GetUser() == user) {
            user_rentals.push_back(rental.get());
        }
    }
    return user_rentals;
}

const std::vector<std::unique_ptr<Rental> >& RentalManager::GetRentals() const {
    return rentals_;
} 