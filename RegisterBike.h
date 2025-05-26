#ifndef REGISTERBIKE_H_
#define REGISTERBIKE_H_

#include <string>
#include <fstream>

class BikeManager;
class RegisterBikeUI;

// 자전거등록처리
class RegisterBike {
private:
    BikeManager* bike_manager_;        // 자전거관리자
    RegisterBikeUI* register_bike_ui_; // 자전거등록UI

public:
    // 생성자 - UI 객체를 내부에서 생성
    RegisterBike(BikeManager* bike_manager, std::ifstream* input_file);
    // 소멸자
    ~RegisterBike();
    // 자전거추가 - 파라미터를 UI에서 읽음
    void AddBike();
};

#endif  // REGISTERBIKE_H_ 