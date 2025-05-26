#include "RentalInfoUI.h"
#include <fstream>
#include <iostream>

// 생성자
RentalInfoUI::RentalInfoUI(const std::string& output_filename, std::ifstream* input_file) 
    : input_file_(input_file) {
    output_file_.open(output_filename, std::ios::app);
}

// 소멸자
RentalInfoUI::~RentalInfoUI() {
    if (output_file_.is_open()) output_file_.close();
}

// 대여목록헤더출력
void RentalInfoUI::ShowRentalListHeader() {
    output_file_ << "5.1. 대여 리스트 조회" << std::endl;
    std::cout << "5.1. 자전거 대여 리스트" << std::endl;
}

// 대여정보출력
void RentalInfoUI::ShowRentalInfo(const std::string& bike_id, const std::string& model) {
    output_file_ << "> " << bike_id << " " << model << std::endl;
    std::cout << "> " << bike_id << " " << model << std::endl;
}

// 대여목록푸터출력
void RentalInfoUI::ShowRentalListFooter() {
    output_file_ << std::endl;
    std::cout << std::endl;
}

// 대여정보결과출력
void RentalInfoUI::ShowRentalInfoResult(const std::string& bike_id, const std::string& model) {
    output_file_ << "5.1. 대여 정보 조회" << std::endl;
    output_file_ << "> " << bike_id << " " << model << std::endl;
    std::cout << "5.1. 대여 정보 조회" << std::endl;
    std::cout << "> " << bike_id << " " << model << std::endl;
    output_file_ << std::endl;
    std::cout << std::endl;
} 