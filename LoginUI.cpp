#include "LoginUI.h"
#include <fstream>
#include <iostream>

LoginUI::LoginUI(const std::string& filename) {
    output_file_.open(filename, std::ios::app);
}

LoginUI::~LoginUI() {
    if (output_file_.is_open()) output_file_.close();
}

void LoginUI::ShowLoginResult(const std::string& id, const std::string& pw) {
    output_file_ << "2.1. 로그인" << std::endl;
    output_file_ << "> " << id << " " << pw << std::endl;
    std::cout << "2.1. 로그인" << std::endl;
    std::cout << "> " << id << " " << pw << std::endl;
    output_file_ << std::endl;
    std::cout << std::endl;
} 