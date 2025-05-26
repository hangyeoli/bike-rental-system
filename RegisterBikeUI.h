#ifndef REGISTERBIKEUI_H_
#define REGISTERBIKEUI_H_

#include <string>
#include <fstream>

// 자전거등록UI
class RegisterBikeUI {
private:
    std::ofstream output_file_;  // 출력파일
    std::ifstream* input_file_;  // 입력파일

public:
    // 생성자
    RegisterBikeUI(const std::string& output_filename, std::ifstream* input_file);
    // 소멸자
    ~RegisterBikeUI();
    // 자전거등록 파라미터 읽기
    bool ReadRegisterBikeParameters(std::string& bike_id, std::string& model);
    // 등록결과출력
    void ShowRegisterBikeResult(const std::string& bike_id, 
                               const std::string& model);
};

#endif  // REGISTERBIKEUI_H_ 