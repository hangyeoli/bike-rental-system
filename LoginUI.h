#ifndef LOGINUI_H_
#define LOGINUI_H_

#include <string>
#include <fstream>

// 로그인UI
class LoginUI {
private:
    std::ofstream output_file_;  // 출력파일
    std::ifstream* input_file_;  // 입력파일

public:
    // 생성자
    LoginUI(const std::string& output_filename, std::ifstream* input_file);
    // 소멸자
    ~LoginUI();
    // 로그인 파라미터 읽기
    bool ReadLoginParameters(std::string& id, std::string& pw);
    // 로그인결과출력
    void ShowLoginResult(const std::string& id, const std::string& pw);
};

#endif  // LOGINUI_H_ 