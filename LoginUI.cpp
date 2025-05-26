#include "LoginUI.h"
#include <fstream>
#include <iostream>

// 생성자
LoginUI::LoginUI(const std::string& output_filename, std::ifstream* input_file) 
    : input_file_(input_file) {
    output_file_.open(output_filename, std::ios::app);
}

// 소멸자
LoginUI::~LoginUI() {
    if (output_file_.is_open()) output_file_.close();
}

// 로그인 파라미터 읽기
bool LoginUI::ReadLoginParameters(std::string& id, std::string& pw) {
    if (input_file_ && *input_file_ >> id >> pw) {
        return true;
    }
    return false;
}

// 로그인결과출력
void LoginUI::ShowLoginResult(const std::string& id, const std::string& pw) {
    output_file_ << "2.1. 로그인" << std::endl;
    output_file_ << "> " << id << " " << pw << std::endl;
    std::cout << "2.1. 로그인" << std::endl;
    std::cout << "> " << id << " " << pw << std::endl;
    output_file_ << std::endl;
    std::cout << std::endl;
} 