#include "RegisterBikeUI.h"
#include <fstream>
#include <iostream>

// 생성자
RegisterBikeUI::RegisterBikeUI(const std::string& output_filename, std::ifstream* input_file) 
    : input_file_(input_file) {
    output_file_.open(output_filename, std::ios::app);
}

// 소멸자
RegisterBikeUI::~RegisterBikeUI() {
    if (output_file_.is_open()) output_file_.close();
}

// 자전거등록 파라미터 읽기
bool RegisterBikeUI::ReadRegisterBikeParameters(std::string& bike_id, std::string& model) {
    if (input_file_ && *input_file_ >> bike_id >> model) {
        return true;
    }
    return false;
}

// 자전거등록결과출력
void RegisterBikeUI::ShowRegisterBikeResult(const std::string& bike_id, const std::string& model) {
    output_file_ << "3.1. 자전거 등록" << std::endl;
    output_file_ << "> " << bike_id << " " << model << std::endl;
    std::cout << "3.1. 자전거 등록" << std::endl;
    std::cout << "> " << bike_id << " " << model << std::endl;
    output_file_ << std::endl;
    std::cout << std::endl;
} 