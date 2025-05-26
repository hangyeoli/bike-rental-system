#include "SignUp.h"
#include "UserManager.h"
#include "User.h"
#include "SignUpUI.h"
#include <memory>

SignUp::SignUp(UserManager* user_manager, SignUpUI* sign_up_ui)
    : user_manager_(user_manager), sign_up_ui_(sign_up_ui) {}

void SignUp::RegisterUser(const std::string& id, const std::string& pw, const std::string& phone) {
    auto user = std::make_unique<User>(id, pw, phone);
    user_manager_->AddUser(std::move(user));
    sign_up_ui_->ShowSignUpResult(id, pw, phone);
} 