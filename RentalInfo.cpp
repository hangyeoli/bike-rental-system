#include "RentalInfo.h"
#include "RentalManager.h"
#include "RentalInfoUI.h"
#include "User.h"
#include "Rental.h"
#include "Bike.h"
#include <vector>
#include <algorithm>

// 생성자 - UI 객체를 내부에서 생성
RentalInfo::RentalInfo(RentalManager* rental_manager, std::ifstream* input_file)
    : rental_manager_(rental_manager) {
    rental_info_ui_ = new RentalInfoUI("output.txt", input_file);
}

// 소멸자
RentalInfo::~RentalInfo() {
    delete rental_info_ui_;
}

// 자전거ID비교함수
bool CompareBikeId(const Rental* a, const Rental* b) {
    return a->GetBike()->GetBikeId() < b->GetBike()->GetBikeId();
}

// 사용자대여목록표시
void RentalInfo::ShowUserRentalList(User* user) {
    rental_info_ui_->ShowRentalListHeader();
    
    std::vector<const Rental*> rentals = rental_manager_->GetRentalsByUser(user);
    
    // 자전거 ID 순으로 정렬
    std::sort(rentals.begin(), rentals.end(), CompareBikeId);
    
    for (const Rental* rental : rentals) {
        const Bike* bike = rental->GetBike();
        rental_info_ui_->ShowRentalInfo(bike->GetBikeId(), bike->GetModel());
    }
    
    rental_info_ui_->ShowRentalListFooter();
} 