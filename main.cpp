#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "UserManager.h"
#include "BikeManager.h"
#include "RentalManager.h"
#include "SignUp.h"
#include "SignUpUI.h"
#include "Login.h"
#include "LoginUI.h"
#include "Logout.h"
#include "LogoutUI.h"
#include "RegisterBike.h"
#include "RegisterBikeUI.h"
#include "RentBike.h"
#include "RentBikeUI.h"
#include "RentalInfo.h"
#include "RentalInfoUI.h"
#include "Exit.h"
#include "ExitUI.h"

struct Command {
    int command;
    int subCommand;
    std::vector<std::string> parameters;
};

Command parseCommand(const std::string& line) {
    Command cmd;
    std::istringstream iss(line);
    iss >> cmd.command >> cmd.subCommand;
    std::string param;
    while (iss >> param) {
        cmd.parameters.push_back(param);
    }
    return cmd;
}

int main() {
    // 파일명
    std::string outputFile = "output.txt";

    // 매니저 객체들 생성
    UserManager userManager;
    BikeManager bikeManager;
    RentalManager rentalManager;

    // UI 객체들 생성
    SignUpUI signUpUI(outputFile);
    LoginUI loginUI(outputFile);
    LogoutUI logoutUI(outputFile);
    RegisterBikeUI registerBikeUI(outputFile);
    RentBikeUI rentBikeUI(outputFile);
    RentalInfoUI rentalInfoUI(outputFile);
    ExitUI exitUI(outputFile);

    // 컨트롤 객체들 생성
    SignUp signUp(&userManager, &signUpUI);
    Login login(&userManager, &loginUI);
    Logout logout(&logoutUI);
    RegisterBike registerBike(&bikeManager, &registerBikeUI);
    RentBike rentBike(&bikeManager, &rentalManager, &rentBikeUI);
    RentalInfo rentalInfo(&rentalManager, &rentalInfoUI);
    Exit exitSys(&exitUI);

    // 현재 로그인된 사용자
    User* currentUser = nullptr;

    std::ifstream inputFile("input.txt");
    std::string line;
    while (std::getline(inputFile, line)) {
        Command cmd = parseCommand(line);
        if (cmd.command == 1 && cmd.subCommand == 1) {
            // 회원가입 (로그인하지 않은 사용자만 가능)
            if (currentUser == nullptr && cmd.parameters.size() >= 3) {
                signUp.RegisterUser(cmd.parameters[0], cmd.parameters[1], cmd.parameters[2]);
            }
        }
        else if (cmd.command == 2 && cmd.subCommand == 1) {
            // 로그인
            if (cmd.parameters.size() >= 2) {
                currentUser = login.Authenticate(cmd.parameters[0], cmd.parameters[1]);
            }
        }
        else if (cmd.command == 2 && cmd.subCommand == 2) {
            // 로그아웃
            if (currentUser) {
                logout.LogoutUser(currentUser->GetId());
                currentUser = nullptr;
            }
        }
        else if (cmd.command == 3 && cmd.subCommand == 1) {
            // 자전거 등록 (관리자만 가능)
            if (currentUser && currentUser->GetIsAdmin() && cmd.parameters.size() >= 2) {
                registerBike.AddBike(cmd.parameters[0], cmd.parameters[1]);
            }
        }
        else if (cmd.command == 4 && cmd.subCommand == 1) {
            // 자전거 대여 (회원만 가능)
            if (currentUser && !currentUser->GetIsAdmin() && cmd.parameters.size() >= 1) {
                rentBike.StartRental(cmd.parameters[0], currentUser);
            }
        }
        else if (cmd.command == 5 && cmd.subCommand == 1) {
            // 대여 리스트 조회 (회원만 가능)
            if (currentUser && !currentUser->GetIsAdmin()) {
                rentalInfo.ShowUserRentalList(currentUser);
            }
        }
        else if (cmd.command == 6 && cmd.subCommand == 1) {
            // 종료
            exitSys.Terminate();
            break;
        }
    }
    inputFile.close();
    return 0;
} 