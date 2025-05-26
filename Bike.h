#ifndef BIKE_H_
#define BIKE_H_

#include <string>

class User;

// 자전거정보
class Bike {
private:
    std::string bike_id_;    // 자전거ID
    std::string model_;      // 모델명
    bool available_;         // 대여가능여부
    User* current_user_;     // 현재사용자

public:
    // 생성자
    Bike(const std::string& bike_id, const std::string& model);
    
    // 자전거ID조회
    const std::string& GetBikeId() const;
    // 모델명조회
    const std::string& GetModel() const;
    // 대여가능여부조회
    bool IsAvailable() const;
    // 대여처리
    void Rent(User* user);
    // 반납처리
    void ReturnBike();
    // 현재사용자조회
    const User* GetCurrentUser() const;
};

#endif  // BIKE_H_ 