#ifndef SIGNUP_H_
#define SIGNUP_H_

#include <string>
#include <fstream>

class UserManager;
class SignUpUI;

// 회원가입처리
class SignUp {
private:
    UserManager* user_manager_;  // 사용자관리자
    SignUpUI* sign_up_ui_;       // 회원가입UI

public:
    // 생성자 - UI 객체를 내부에서 생성
    SignUp(UserManager* user_manager, std::ifstream* input_file);
    // 소멸자
    ~SignUp();
    // 사용자등록 - 파라미터를 UI에서 읽음
    void RegisterUser();
};

#endif  // SIGNUP_H_ 