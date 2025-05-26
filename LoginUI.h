#ifndef LOGINUI_H_
#define LOGINUI_H_

#include <string>
#include <fstream>

class LoginUI {
private:
    std::ofstream output_file_;

public:
    LoginUI(const std::string& filename);
    ~LoginUI();
    void ShowLoginResult(const std::string& id, const std::string& pw);
};

#endif  // LOGINUI_H_ 