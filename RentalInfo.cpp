#include "RentalInfo.h"
#include "RentalManager.h"
#include "Rental.h"
#include "User.h"
#include "RentalInfoUI.h"
#include "Bike.h"
#include <vector>
#include <algorithm>

RentalInfo::RentalInfo(RentalManager* rental_manager, RentalInfoUI* rental_info_ui)
    : rental_manager_(rental_manager), rental_info_ui_(rental_info_ui) {}

bool CompareBikeId(const Rental* a, const Rental* b) {
    return a->GetBike()->GetBikeId() < b->GetBike()->GetBikeId();
}

void RentalInfo::ShowUserRentalList(User* user) {
    rental_info_ui_->ShowRentalListHeader();
    auto rentals = rental_manager_->GetRentalsByUser(user);
    
    // 자전거 ID 순으로 정렬
    std::vector<const Rental*> sorted_rentals(rentals.begin(), rentals.end());
    std::sort(sorted_rentals.begin(), sorted_rentals.end(), CompareBikeId);
    
    for (const auto& rental : sorted_rentals) {
        rental_info_ui_->ShowRentalInfo(rental->GetBike()->GetBikeId(), 
                                      rental->GetBike()->GetModel());
    }
    rental_info_ui_->ShowRentalListFooter();
} 