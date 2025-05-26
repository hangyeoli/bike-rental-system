#ifndef LOGOUT_H_
#define LOGOUT_H_

#include <string>

class LogoutUI;

class Logout {
private:
    LogoutUI* logout_ui_;

public:
    Logout(LogoutUI* logout_ui);
    void LogoutUser(const std::string& user_id);
};

#endif  // LOGOUT_H_ 