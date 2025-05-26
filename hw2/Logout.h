#ifndef LOGOUT_H
#define LOGOUT_H

#include <string>

class LogoutUI;

class Logout {
private:
    LogoutUI* logoutUI;

public:
    Logout(LogoutUI* logoutUI);
    void logout(const std::string& userId);
};

#endif 