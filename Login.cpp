#include "Login.h"
#include "UserManager.h"
#include "User.h"
#include "LoginUI.h"

// 생성자 - UI 객체를 내부에서 생성
Login::Login(UserManager* user_manager, std::ifstream* input_file)
    : user_manager_(user_manager) {
    login_ui_ = new LoginUI("output.txt", input_file);
}

// 소멸자
Login::~Login() {
    delete login_ui_;
}

// 인증처리 - 파라미터를 UI에서 읽음
User* Login::Authenticate() {
    std::string id, pw;
    if (login_ui_->ReadLoginParameters(id, pw)) {
        login_ui_->ShowLoginResult(id, pw);
        User* user = user_manager_->FindUserById(id);
        if (user && user->CheckPassword(pw)) {
            return user;
        }
    }
    return nullptr;
} 