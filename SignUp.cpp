#include "SignUp.h"
#include "UserManager.h"
#include "User.h"
#include "SignUpUI.h"
#include <memory>

// 생성자 - UI 객체를 내부에서 생성
SignUp::SignUp(UserManager* user_manager, std::ifstream* input_file)
    : user_manager_(user_manager) {
    sign_up_ui_ = new SignUpUI("output.txt", input_file);
}

// 소멸자
SignUp::~SignUp() {
    delete sign_up_ui_;
}

// 사용자등록 - 파라미터를 UI에서 읽음
void SignUp::RegisterUser() {
    std::string id, pw, phone;
    if (sign_up_ui_->ReadSignUpParameters(id, pw, phone)) {
        std::unique_ptr<User> user(new User(id, pw, phone));
        user_manager_->AddUser(std::move(user));
        sign_up_ui_->ShowSignUpResult(id, pw, phone);
    }
} 