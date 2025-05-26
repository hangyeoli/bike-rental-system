#include "RentBike.h"
#include "BikeManager.h"
#include "RentalManager.h"
#include "Bike.h"
#include "User.h"
#include "Rental.h"
#include "RentBikeUI.h"
#include <memory>

RentBike::RentBike(BikeManager* bike_manager, RentalManager* rental_manager, 
                   RentBikeUI* rent_bike_ui)
    : bike_manager_(bike_manager), rental_manager_(rental_manager), 
      rent_bike_ui_(rent_bike_ui) {}

void RentBike::StartRental(const std::string& bike_id, User* user) {
    Bike* bike = bike_manager_->FindBikeById(bike_id);
    if (bike && bike->IsAvailable()) {
        bike->Rent(user);
        auto rental = std::make_unique<Rental>(user, bike);
        rental_manager_->AddRental(std::move(rental));
        rent_bike_ui_->ShowRentBikeResult(bike_id, bike->GetModel());
    }
} 