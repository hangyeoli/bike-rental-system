#include "RegisterBike.h"
#include "BikeManager.h"
#include "Bike.h"
#include "RegisterBikeUI.h"
#include <memory>

// 생성자 - UI 객체를 내부에서 생성
RegisterBike::RegisterBike(BikeManager* bike_manager, std::ifstream* input_file)
    : bike_manager_(bike_manager) {
    register_bike_ui_ = new RegisterBikeUI("output.txt", input_file);
}

// 소멸자
RegisterBike::~RegisterBike() {
    delete register_bike_ui_;
}

// 자전거추가 - 파라미터를 UI에서 읽음
void RegisterBike::AddBike() {
    std::string bike_id, model;
    if (register_bike_ui_->ReadRegisterBikeParameters(bike_id, model)) {
        std::unique_ptr<Bike> bike(new Bike(bike_id, model));
        bike_manager_->AddBike(std::move(bike));
        register_bike_ui_->ShowRegisterBikeResult(bike_id, model);
    }
} 