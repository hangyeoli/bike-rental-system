#ifndef RENTALINFO_H_
#define RENTALINFO_H_

#include <string>
#include <fstream>

class RentalManager;
class RentalInfoUI;
class User;

// 대여정보조회
class RentalInfo {
private:
    RentalManager* rental_manager_;   // 대여관리자
    RentalInfoUI* rental_info_ui_;    // 대여정보UI

public:
    // 생성자 - UI 객체를 내부에서 생성
    RentalInfo(RentalManager* rental_manager, std::ifstream* input_file);
    // 소멸자
    ~RentalInfo();
    // 사용자대여목록표시
    void ShowUserRentalList(User* user);
};

#endif  // RENTALINFO_H_ 