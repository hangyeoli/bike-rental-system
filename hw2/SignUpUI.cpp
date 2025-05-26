#include "SignUpUI.h"
#include <fstream>
#include <iostream>

SignUpUI::SignUpUI(const std::string& filename) {
    outputFile.open(filename, std::ios::app);
}

SignUpUI::~SignUpUI() {
    if (outputFile.is_open()) outputFile.close();
}

void SignUpUI::showSignUpResult(const std::string& id, const std::string& pw, const std::string& phone) {
    outputFile << "1.1. 회원가입" << std::endl;
    outputFile << "> " << id << " " << pw << " " << phone << std::endl;
    std::cout << "1.1. 회원가입" << std::endl;
    std::cout << "> " << id << " " << pw << " " << phone << std::endl;
} 