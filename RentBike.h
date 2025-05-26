#ifndef RENTBIKE_H_
#define RENTBIKE_H_

#include <string>
#include <fstream>

class BikeManager;
class RentalManager;
class RentBikeUI;
class User;

// 자전거대여처리
class RentBike {
private:
    BikeManager* bike_manager_;      // 자전거관리자
    RentalManager* rental_manager_;  // 대여관리자
    RentBikeUI* rent_bike_ui_;       // 자전거대여UI

public:
    // 생성자 - UI 객체를 내부에서 생성
    RentBike(BikeManager* bike_manager, RentalManager* rental_manager, std::ifstream* input_file);
    // 소멸자
    ~RentBike();
    // 대여시작 - 파라미터를 UI에서 읽음
    void StartRental(User* user);
};

#endif  // RENTBIKE_H_ 