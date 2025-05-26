#ifndef SIGNUP_H
#define SIGNUP_H

#include <string>

class UserManager;
class SignUpUI;

class SignUp {
private:
    UserManager* userManager;
    SignUpUI* signUpUI;

public:
    SignUp(UserManager* userManager, SignUpUI* signUpUI);
    void signUp(const std::string& id, const std::string& pw, const std::string& phone);
};

#endif 