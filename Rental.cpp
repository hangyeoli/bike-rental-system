#include "Rental.h"
#include "User.h"
#include "Bike.h"

// 생성자
Rental::Rental(User* user, Bike* bike) : user_(user), bike_(bike) {}

// 사용자조회
const User* Rental::GetUser() const {
    return user_;
}

// 자전거조회
const Bike* Rental::GetBike() const {
    return bike_;
}

// 자전거표시정보
std::string Rental::GetBikeDisplayInfo() const {
    return bike_->GetBikeId() + " " + bike_->GetModel();
} 