#ifndef LOGIN_H
#define LOGIN_H

#include <string>

class UserManager;
class LoginUI;
class User;

class Login {
private:
    UserManager* userManager;
    LoginUI* loginUI;

public:
    Login(UserManager* userManager, LoginUI* loginUI);
    User* login(const std::string& id, const std::string& pw);
};

#endif 