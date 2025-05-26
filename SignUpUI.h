#ifndef SIGNUPUI_H_
#define SIGNUPUI_H_

#include <string>
#include <fstream>

class SignUpUI {
private:
    std::ofstream output_file_;

public:
    SignUpUI(const std::string& filename);
    ~SignUpUI();
    void ShowSignUpResult(const std::string& id, const std::string& pw, 
                         const std::string& phone);
};

#endif  // SIGNUPUI_H_ 