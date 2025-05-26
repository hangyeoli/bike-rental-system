#ifndef EXIT_H_
#define EXIT_H_

#include <fstream>

class ExitUI;

// 종료처리
class Exit {
private:
    ExitUI* exit_ui_;  // 종료UI

public:
    // 생성자 - UI 객체를 내부에서 생성
    Exit(std::ifstream* input_file);
    // 소멸자
    ~Exit();
    // 프로그램종료
    void Terminate();
};

#endif  // EXIT_H_ 