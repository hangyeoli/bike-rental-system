#include "RentalInfoUI.h"
#include <fstream>
#include <iostream>

RentalInfoUI::RentalInfoUI(const std::string& filename) {
    output_file_.open(filename, std::ios::app);
}

RentalInfoUI::~RentalInfoUI() {
    if (output_file_.is_open()) output_file_.close();
}

void RentalInfoUI::ShowRentalListHeader() {
    output_file_ << "5.1. 대여 리스트 조회" << std::endl;
    std::cout << "5.1. 자전거 대여 리스트" << std::endl;
}

void RentalInfoUI::ShowRentalInfo(const std::string& bike_id, const std::string& model) {
    output_file_ << "> " << bike_id << " " << model << std::endl;
    std::cout << "> " << bike_id << " " << model << std::endl;
}

void RentalInfoUI::ShowRentalListFooter() {
    output_file_ << std::endl;
    std::cout << std::endl;
}

void RentalInfoUI::ShowRentalInfoResult(const std::string& bike_id, const std::string& model) {
    output_file_ << "5.1. 대여 정보 조회" << std::endl;
    output_file_ << "> " << bike_id << " " << model << std::endl;
    std::cout << "5.1. 대여 정보 조회" << std::endl;
    std::cout << "> " << bike_id << " " << model << std::endl;
    output_file_ << std::endl;
    std::cout << std::endl;
} 