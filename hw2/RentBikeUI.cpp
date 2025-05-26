#include "RentBikeUI.h"
#include <fstream>
#include <iostream>

RentBikeUI::RentBikeUI(const std::string& filename) {
    outputFile.open(filename, std::ios::app);
}

RentBikeUI::~RentBikeUI() {
    if (outputFile.is_open()) outputFile.close();
}

void RentBikeUI::showRentResult(const std::string& bikeId, const std::string& model) {
    outputFile << "4.1. 자전거 대여" << std::endl;
    outputFile << "> " << bikeId << " " << model << std::endl;
    std::cout << "4.1. 자전거 대여" << std::endl;
    std::cout << "> " << bikeId << " " << model << std::endl;
} 