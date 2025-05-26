#include "RentalManager.h"
#include "User.h"

// 대여추가
void RentalManager::AddRental(std::unique_ptr<Rental> rental) {
    rentals_.push_back(std::move(rental));
}

// 사용자별대여조회
std::vector<const Rental*> RentalManager::GetRentalsByUser(const User* user) const {
    std::vector<const Rental*> user_rentals;
    for (const auto& rental : rentals_) {
        if (rental->GetUser() == user) {
            user_rentals.push_back(rental.get());
        }
    }
    return user_rentals;
}

// 대여목록조회
const std::vector<std::unique_ptr<Rental> >& RentalManager::GetRentals() const {
    return rentals_;
} 