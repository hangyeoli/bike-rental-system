#ifndef RENTALINFOUI_H_
#define RENTALINFOUI_H_

#include <string>
#include <fstream>

// 대여정보UI
class RentalInfoUI {
private:
    std::ofstream output_file_;  // 출력파일
    std::ifstream* input_file_;  // 입력파일

public:
    // 생성자
    RentalInfoUI(const std::string& output_filename, std::ifstream* input_file);
    // 소멸자
    ~RentalInfoUI();
    // 목록헤더출력
    void ShowRentalListHeader();
    // 대여정보출력
    void ShowRentalInfo(const std::string& bike_id, const std::string& model);
    // 목록푸터출력
    void ShowRentalListFooter();
    // 대여정보결과출력
    void ShowRentalInfoResult(const std::string& bike_id, 
                             const std::string& model);
};

#endif  // RENTALINFOUI_H_ 