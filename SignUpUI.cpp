#include "SignUpUI.h"
#include <fstream>
#include <iostream>

SignUpUI::SignUpUI(const std::string& filename) {
    output_file_.open(filename, std::ios::app);
}

SignUpUI::~SignUpUI() {
    if (output_file_.is_open()) output_file_.close();
}

void SignUpUI::ShowSignUpResult(const std::string& id, const std::string& pw, const std::string& phone) {
    output_file_ << "1.1. 회원가입" << std::endl;
    output_file_ << "> " << id << " " << pw << " " << phone << std::endl;
    std::cout << "1.1. 회원가입" << std::endl;
    std::cout << "> " << id << " " << pw << " " << phone << std::endl;
    output_file_ << std::endl;
    std::cout << std::endl;
} 