#include "RentBikeUI.h"
#include <fstream>
#include <iostream>

RentBikeUI::RentBikeUI(const std::string& filename) {
    output_file_.open(filename, std::ios::app);
}

RentBikeUI::~RentBikeUI() {
    if (output_file_.is_open()) output_file_.close();
}

void RentBikeUI::ShowRentBikeResult(const std::string& bike_id, const std::string& model) {
    output_file_ << "4.1. 자전거 대여" << std::endl;
    output_file_ << "> " << bike_id << " " << model << std::endl;
    std::cout << "4.1. 자전거 대여" << std::endl;
    std::cout << "> " << bike_id << " " << model << std::endl;
    output_file_ << std::endl;
    std::cout << std::endl;
} 