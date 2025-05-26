#ifndef EXITUI_H_
#define EXITUI_H_

#include <string>
#include <fstream>

// 종료UI
class ExitUI {
private:
    std::ofstream output_file_;  // 출력파일
    std::ifstream* input_file_;  // 입력파일

public:
    // 생성자
    ExitUI(const std::string& output_filename, std::ifstream* input_file);
    // 소멸자
    ~ExitUI();
    // 종료메시지출력
    void ShowExitMessage();
};

#endif  // EXITUI_H_ 