#include "RentBike.h"
#include "BikeManager.h"
#include "RentalManager.h"
#include "Bike.h"
#include "User.h"
#include "Rental.h"
#include "RentBikeUI.h"
#include <memory>

// 생성자 - UI 객체를 내부에서 생성
RentBike::RentBike(BikeManager* bike_manager, RentalManager* rental_manager, std::ifstream* input_file)
    : bike_manager_(bike_manager), rental_manager_(rental_manager) {
    rent_bike_ui_ = new RentBikeUI("output.txt", input_file);
}

// 소멸자
RentBike::~RentBike() {
    delete rent_bike_ui_;
}

// 대여시작 - 파라미터를 UI에서 읽음
void RentBike::StartRental(User* user) {
    std::string bike_id;
    if (rent_bike_ui_->ReadRentBikeParameters(bike_id)) {
        Bike* bike = bike_manager_->FindBikeById(bike_id);
        if (bike && bike->IsAvailable()) {
            bike->Rent(user);
            std::unique_ptr<Rental> rental(new Rental(user, bike));
            rental_manager_->AddRental(std::move(rental));
            rent_bike_ui_->ShowRentBikeResult(bike_id, bike->GetModel());
        }
    }
} 