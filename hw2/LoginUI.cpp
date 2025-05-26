#include "LoginUI.h"
#include <fstream>
#include <iostream>

LoginUI::LoginUI(const std::string& filename) {
    outputFile.open(filename, std::ios::app);
}

LoginUI::~LoginUI() {
    if (outputFile.is_open()) outputFile.close();
}

void LoginUI::showLoginResult(const std::string& id, const std::string& pw) {
    outputFile << "2.1. 로그인" << std::endl;
    outputFile << "> " << id << " " << pw << std::endl;
    std::cout << "2.1. 로그인" << std::endl;
    std::cout << "> " << id << " " << pw << std::endl;
} 