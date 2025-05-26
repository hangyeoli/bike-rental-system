#ifndef RENTAL_H_
#define RENTAL_H_

#include <string>

class User;
class Bike;

// 대여정보
class Rental {
private:
    User* user_;  // 사용자
    Bike* bike_;  // 자전거

public:
    // 생성자
    Rental(User* user, Bike* bike);
    
    // 사용자조회
    const User* GetUser() const;
    // 자전거조회
    const Bike* GetBike() const;
    // 자전거표시정보
    std::string GetBikeDisplayInfo() const;
};

#endif  // RENTAL_H_ 