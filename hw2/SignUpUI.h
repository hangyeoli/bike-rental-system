#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include <string>
#include <fstream>

class SignUpUI {
private:
    std::ofstream outputFile;

public:
    SignUpUI(const std::string& filename);
    ~SignUpUI();
    
    void showSignUpResult(const std::string& id, const std::string& pw, const std::string& phone);
};

#endif 