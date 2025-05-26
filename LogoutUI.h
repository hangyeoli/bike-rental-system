#ifndef LOGOUTUI_H_
#define LOGOUTUI_H_

#include <string>
#include <fstream>

class LogoutUI {
private:
    std::ofstream output_file_;

public:
    LogoutUI(const std::string& filename);
    ~LogoutUI();
    void ShowLogoutResult(const std::string& id);
};

#endif  // LOGOUTUI_H_ 