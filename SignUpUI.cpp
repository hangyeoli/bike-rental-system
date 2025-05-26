#include "SignUpUI.h"
#include <fstream>
#include <iostream>

// 생성자
SignUpUI::SignUpUI(const std::string& output_filename, std::ifstream* input_file) 
    : input_file_(input_file) {
    output_file_.open(output_filename, std::ios::app);
}

// 소멸자
SignUpUI::~SignUpUI() {
    if (output_file_.is_open()) output_file_.close();
}

// 회원가입 파라미터 읽기
bool SignUpUI::ReadSignUpParameters(std::string& id, std::string& pw, std::string& phone) {
    if (input_file_ && *input_file_ >> id >> pw >> phone) {
        return true;
    }
    return false;
}

// 회원가입결과출력
void SignUpUI::ShowSignUpResult(const std::string& id, const std::string& pw, const std::string& phone) {
    output_file_ << "1.1. 회원가입" << std::endl;
    output_file_ << "> " << id << " " << pw << " " << phone << std::endl;
    std::cout << "1.1. 회원가입" << std::endl;
    std::cout << "> " << id << " " << pw << " " << phone << std::endl;
    output_file_ << std::endl;
    std::cout << std::endl;
} 