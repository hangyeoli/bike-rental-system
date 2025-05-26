#ifndef LOGINUI_H
#define LOGINUI_H

#include <string>
#include <fstream>

class LoginUI {
private:
    std::ofstream outputFile;

public:
    LoginUI(const std::string& filename);
    ~LoginUI();
    void showLoginResult(const std::string& id, const std::string& pw);
};

#endif 