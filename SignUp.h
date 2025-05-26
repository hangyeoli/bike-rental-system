#ifndef SIGNUP_H_
#define SIGNUP_H_

#include <string>

class UserManager;
class SignUpUI;

class SignUp {
private:
    UserManager* user_manager_;
    SignUpUI* sign_up_ui_;

public:
    SignUp(UserManager* user_manager, SignUpUI* sign_up_ui);
    void RegisterUser(const std::string& id, const std::string& pw, 
                     const std::string& phone);
};

#endif  // SIGNUP_H_ 