#ifndef LOGOUT_H_
#define LOGOUT_H_

#include <string>
#include <fstream>

class LogoutUI;

// 로그아웃처리
class Logout {
private:
    LogoutUI* logout_ui_;  // 로그아웃UI

public:
    // 생성자 - UI 객체를 내부에서 생성
    Logout(std::ifstream* input_file);
    // 소멸자
    ~Logout();
    // 로그아웃실행
    void LogoutUser(const std::string& user_id);
};

#endif  // LOGOUT_H_ 