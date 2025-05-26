#include "ExitUI.h"
#include <fstream>
#include <iostream>

ExitUI::ExitUI(const std::string& filename) {
    outputFile.open(filename, std::ios::app);
}

ExitUI::~ExitUI() {
    if (outputFile.is_open()) outputFile.close();
}

void ExitUI::showExitMessage() {
    outputFile << "6.1. 종료" << std::endl;
    std::cout << "6.1. 종료" << std::endl;
} 