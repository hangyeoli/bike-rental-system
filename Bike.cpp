#include "Bike.h"
#include "User.h"

// 생성자
Bike::Bike(const std::string& bike_id, const std::string& model)
    : bike_id_(bike_id), model_(model), available_(true), current_user_(nullptr) {}

// 자전거ID조회
const std::string& Bike::GetBikeId() const {
    return bike_id_;
}

// 모델명조회
const std::string& Bike::GetModel() const {
    return model_;
}

// 대여가능여부조회
bool Bike::IsAvailable() const {
    return available_;
}

// 대여처리
void Bike::Rent(User* user) {
    available_ = false;
    current_user_ = user;
}

// 반납처리
void Bike::ReturnBike() {
    available_ = true;
    current_user_ = nullptr;
}

// 현재사용자조회
const User* Bike::GetCurrentUser() const {
    return current_user_;
} 