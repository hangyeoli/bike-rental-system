#include "LogoutUI.h"
#include <fstream>
#include <iostream>

// 생성자
LogoutUI::LogoutUI(const std::string& output_filename, std::ifstream* input_file) 
    : input_file_(input_file) {
    output_file_.open(output_filename, std::ios::app);
}

// 소멸자
LogoutUI::~LogoutUI() {
    if (output_file_.is_open()) output_file_.close();
}

// 로그아웃결과출력
void LogoutUI::ShowLogoutResult(const std::string& id) {
    output_file_ << "2.2. 로그아웃" << std::endl;
    output_file_ << "> " << id << std::endl;
    std::cout << "2.2. 로그아웃" << std::endl;
    std::cout << "> " << id << std::endl;
    output_file_ << std::endl;
    std::cout << std::endl;
} 