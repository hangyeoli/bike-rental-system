#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include <string>
#include <fstream>

class LogoutUI {
private:
    std::ofstream outputFile;

public:
    LogoutUI(const std::string& filename);
    ~LogoutUI();
    void showLogoutResult(const std::string& id);
};

#endif 