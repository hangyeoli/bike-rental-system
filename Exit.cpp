#include "Exit.h"
#include "ExitUI.h"

// 생성자 - UI 객체를 내부에서 생성
Exit::Exit(std::ifstream* input_file) {
    exit_ui_ = new ExitUI("output.txt", input_file);
}

// 소멸자
Exit::~Exit() {
    delete exit_ui_;
}

// 프로그램종료
void Exit::Terminate() {
    exit_ui_->ShowExitMessage();
} 