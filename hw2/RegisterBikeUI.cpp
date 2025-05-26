#include "RegisterBikeUI.h"
#include <fstream>
#include <iostream>

RegisterBikeUI::RegisterBikeUI(const std::string& filename) {
    outputFile.open(filename, std::ios::app);
}

RegisterBikeUI::~RegisterBikeUI() {
    if (outputFile.is_open()) outputFile.close();
}

void RegisterBikeUI::showRegisterResult(const std::string& bikeId, const std::string& model) {
    outputFile << "3.1. 자전거 등록" << std::endl;
    outputFile << "> " << bikeId << " " << model << std::endl;
    std::cout << "3.1. 자전거 등록" << std::endl;
    std::cout << "> " << bikeId << " " << model << std::endl;
} 