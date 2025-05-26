#ifndef RENTBIKEUI_H_
#define RENTBIKEUI_H_

#include <string>
#include <fstream>

// 자전거대여UI
class RentBikeUI {
private:
    std::ofstream output_file_;  // 출력파일
    std::ifstream* input_file_;  // 입력파일

public:
    // 생성자
    RentBikeUI(const std::string& output_filename, std::ifstream* input_file);
    // 소멸자
    ~RentBikeUI();
    // 자전거대여 파라미터 읽기
    bool ReadRentBikeParameters(std::string& bike_id);
    // 대여결과출력
    void ShowRentBikeResult(const std::string& bike_id, const std::string& model);
};

#endif  // RENTBIKEUI_H_ 