#include "Login.h"
#include "UserManager.h"
#include "User.h"
#include "LoginUI.h"

Login::Login(UserManager* user_manager, LoginUI* login_ui)
    : user_manager_(user_manager), login_ui_(login_ui) {}

User* Login::Authenticate(const std::string& id, const std::string& pw) {
    User* user = user_manager_->FindUserById(id);
    if (user && user->CheckPassword(pw)) {
        login_ui_->ShowLoginResult(id, pw);
        return user;
    }
    return nullptr;
} 