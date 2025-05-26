#include "Logout.h"
#include "LogoutUI.h"

// 생성자 - UI 객체를 내부에서 생성
Logout::Logout(std::ifstream* input_file) {
    logout_ui_ = new LogoutUI("output.txt", input_file);
}

// 소멸자
Logout::~Logout() {
    delete logout_ui_;
}

// 로그아웃실행
void Logout::LogoutUser(const std::string& user_id) {
    logout_ui_->ShowLogoutResult(user_id);
} 