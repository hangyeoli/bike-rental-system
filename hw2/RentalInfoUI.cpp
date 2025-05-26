#include "RentalInfoUI.h"
#include <fstream>
#include <iostream>

RentalInfoUI::RentalInfoUI(const std::string& filename) {
    outputFile.open(filename, std::ios::app);
}

RentalInfoUI::~RentalInfoUI() {
    if (outputFile.is_open()) outputFile.close();
}

void RentalInfoUI::showRentalListHeader() {
    outputFile << "5.1. 자전거 대여 리스트" << std::endl;
    std::cout << "5.1. 자전거 대여 리스트" << std::endl;
}

void RentalInfoUI::showRentalInfo(const std::string& bikeId, const std::string& model) {
    outputFile << "> " << bikeId << " " << model << std::endl;
    std::cout << "> " << bikeId << " " << model << std::endl;
} 