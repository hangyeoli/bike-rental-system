#ifndef LOGOUTUI_H_
#define LOGOUTUI_H_

#include <string>
#include <fstream>

// 로그아웃UI
class LogoutUI {
private:
    std::ofstream output_file_;  // 출력파일
    std::ifstream* input_file_;  // 입력파일

public:
    // 생성자
    LogoutUI(const std::string& output_filename, std::ifstream* input_file);
    // 소멸자
    ~LogoutUI();
    // 로그아웃결과출력
    void ShowLogoutResult(const std::string& id);
};

#endif  // LOGOUTUI_H_ 