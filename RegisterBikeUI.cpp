#include "RegisterBikeUI.h"
#include <fstream>
#include <iostream>

RegisterBikeUI::RegisterBikeUI(const std::string& filename) {
    output_file_.open(filename, std::ios::app);
}

RegisterBikeUI::~RegisterBikeUI() {
    if (output_file_.is_open()) output_file_.close();
}

void RegisterBikeUI::ShowRegisterBikeResult(const std::string& bike_id, const std::string& model) {
    output_file_ << "3.1. 자전거 등록" << std::endl;
    output_file_ << "> " << bike_id << " " << model << std::endl;
    std::cout << "3.1. 자전거 등록" << std::endl;
    std::cout << "> " << bike_id << " " << model << std::endl;
    output_file_ << std::endl;
    std::cout << std::endl;
} 