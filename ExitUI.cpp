#include "ExitUI.h"
#include <iostream>

// 생성자
ExitUI::ExitUI(const std::string& output_filename, std::ifstream* input_file) 
    : input_file_(input_file) {
    output_file_.open(output_filename, std::ios::app);
}

// 소멸자
ExitUI::~ExitUI() {
    if (output_file_.is_open()) output_file_.close();
}

// 종료메시지출력
void ExitUI::ShowExitMessage() {
    output_file_ << "6.1. 종료" << std::endl;
    std::cout << "6.1. 종료" << std::endl;
} 