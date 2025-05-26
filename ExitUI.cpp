#include "ExitUI.h"
#include <iostream>

ExitUI::ExitUI(const std::string& filename) {
    output_file_.open(filename, std::ios::app);
}

ExitUI::~ExitUI() {
    if (output_file_.is_open()) output_file_.close();
}

void ExitUI::ShowExitMessage() {
    output_file_ << "6.1. 종료" << std::endl;
    std::cout << "6.1. 종료" << std::endl;
} 