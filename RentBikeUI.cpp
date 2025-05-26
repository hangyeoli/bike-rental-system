#include "RentBikeUI.h"
#include <fstream>
#include <iostream>

// 생성자
RentBikeUI::RentBikeUI(const std::string& output_filename, std::ifstream* input_file) 
    : input_file_(input_file) {
    output_file_.open(output_filename, std::ios::app);
}

// 소멸자
RentBikeUI::~RentBikeUI() {
    if (output_file_.is_open()) output_file_.close();
}

// 자전거대여 파라미터 읽기
bool RentBikeUI::ReadRentBikeParameters(std::string& bike_id) {
    if (input_file_ && *input_file_ >> bike_id) {
        return true;
    }
    return false;
}

// 자전거대여결과출력
void RentBikeUI::ShowRentBikeResult(const std::string& bike_id, const std::string& model) {
    output_file_ << "4.1. 자전거 대여" << std::endl;
    output_file_ << "> " << bike_id << " " << model << std::endl;
    std::cout << "4.1. 자전거 대여" << std::endl;
    std::cout << "> " << bike_id << " " << model << std::endl;
    output_file_ << std::endl;
    std::cout << std::endl;
} 