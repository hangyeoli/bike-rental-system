#include "LogoutUI.h"
#include <fstream>
#include <iostream>

LogoutUI::LogoutUI(const std::string& filename) {
    outputFile.open(filename, std::ios::app);
}

LogoutUI::~LogoutUI() {
    if (outputFile.is_open()) outputFile.close();
}

void LogoutUI::showLogoutResult(const std::string& id) {
    outputFile << "2.2. 로그아웃" << std::endl;
    outputFile << "> " << id << std::endl;
    std::cout << "2.2. 로그아웃" << std::endl;
    std::cout << "> " << id << std::endl;
} 