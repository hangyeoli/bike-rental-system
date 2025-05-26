#ifndef SIGNUPUI_H_
#define SIGNUPUI_H_

#include <string>
#include <fstream>

// 회원가입UI
class SignUpUI {
private:
    std::ofstream output_file_;  // 출력파일
    std::ifstream* input_file_;  // 입력파일

public:
    // 생성자
    SignUpUI(const std::string& output_filename, std::ifstream* input_file);
    // 소멸자
    ~SignUpUI();
    // 회원가입 파라미터 읽기
    bool ReadSignUpParameters(std::string& id, std::string& pw, std::string& phone);
    // 회원가입결과출력
    void ShowSignUpResult(const std::string& id, const std::string& pw, 
                         const std::string& phone);
};

#endif  // SIGNUPUI_H_ 