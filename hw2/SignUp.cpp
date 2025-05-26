#include "SignUp.h"
#include "UserManager.h"
#include "User.h"
#include "SignUpUI.h"
#include <memory>

SignUp::SignUp(UserManager* userManager, SignUpUI* signUpUI) 
    : userManager(userManager), signUpUI(signUpUI) {}

void SignUp::signUp(const std::string& id, const std::string& pw, const std::string& phone) {
    auto user = std::make_unique<User>(id, pw, phone);
    userManager->addUser(std::move(user));
    signUpUI->showSignUpResult(id, pw, phone);
} 