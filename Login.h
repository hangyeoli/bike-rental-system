#ifndef LOGIN_H_
#define LOGIN_H_

#include <string>

class UserManager;
class LoginUI;
class User;

class Login {
private:
    UserManager* user_manager_;
    LoginUI* login_ui_;

public:
    Login(UserManager* user_manager, LoginUI* login_ui);
    User* Authenticate(const std::string& id, const std::string& pw);
};

#endif  // LOGIN_H_ 