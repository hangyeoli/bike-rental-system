#ifndef LOGIN_H_
#define LOGIN_H_

#include <string>
#include <fstream>

class UserManager;
class LoginUI;
class User;

// 로그인처리
class Login {
private:
    UserManager* user_manager_;  // 사용자관리자
    LoginUI* login_ui_;          // 로그인UI

public:
    // 생성자 - UI 객체를 내부에서 생성
    Login(UserManager* user_manager, std::ifstream* input_file);
    // 소멸자
    ~Login();
    // 인증처리 - 파라미터를 UI에서 읽음
    User* Authenticate();
};

#endif  // LOGIN_H_ 