#include "LogoutUI.h"
#include <fstream>
#include <iostream>

LogoutUI::LogoutUI(const std::string& filename) {
    output_file_.open(filename, std::ios::app);
}

LogoutUI::~LogoutUI() {
    if (output_file_.is_open()) output_file_.close();
}

void LogoutUI::ShowLogoutResult(const std::string& id) {
    output_file_ << "2.2. 로그아웃" << std::endl;
    output_file_ << "> " << id << std::endl;
    std::cout << "2.2. 로그아웃" << std::endl;
    std::cout << "> " << id << std::endl;
    output_file_ << std::endl;
    std::cout << std::endl;
} 