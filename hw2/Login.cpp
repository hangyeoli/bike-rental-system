#include "Login.h"
#include "UserManager.h"
#include "User.h"
#include "LoginUI.h"

Login::Login(UserManager* userManager, LoginUI* loginUI)
    : userManager(userManager), loginUI(loginUI) {}

User* Login::login(const std::string& id, const std::string& pw) {
    User* user = userManager->findUserById(id);
    if (user && user->checkPassword(pw)) {
        loginUI->showLoginResult(id, pw);
        return user;
    }
    return nullptr;
} 