#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "UserManager.h"
#include "BikeManager.h"
#include "RentalManager.h"
#include "SignUp.h"
#include "Login.h"
#include "Logout.h"
#include "RegisterBike.h"
#include "RentBike.h"
#include "RentalInfo.h"
#include "Exit.h"

void doTask(std::ifstream& input_file) {
    // 매니저 객체들 생성
    UserManager userManager;
    BikeManager bikeManager;
    RentalManager rentalManager;
    
    // 현재 로그인된 사용자
    User* currentUser = nullptr;
    
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    
    while (!is_program_exit && input_file >> menu_level_1 >> menu_level_2) {
        switch (menu_level_1) {
            case 1: {
                switch (menu_level_2) {
                    case 1: { // 회원가입
                        if (currentUser == nullptr) {
                            SignUp signUp(&userManager, &input_file);
                            signUp.RegisterUser();
                        }
                        break;
                    }
                }
                break;
            }
            case 2: {
                switch (menu_level_2) {
                    case 1: { // 로그인
                        Login login(&userManager, &input_file);
                        currentUser = login.Authenticate();
                        break;
                    }
                    case 2: { // 로그아웃
                        if (currentUser) {
                            Logout logout(&input_file);
                            logout.LogoutUser(currentUser->GetId());
                            currentUser = nullptr;
                        }
                        break;
                    }
                }
                break;
            }
            case 3: {
                switch (menu_level_2) {
                    case 1: { // 자전거 등록
                        if (currentUser && currentUser->GetIsAdmin()) {
                            RegisterBike registerBike(&bikeManager, &input_file);
                            registerBike.AddBike();
                        }
                        break;
                    }
                }
                break;
            }
            case 4: {
                switch (menu_level_2) {
                    case 1: { // 자전거 대여
                        if (currentUser && !currentUser->GetIsAdmin()) {
                            RentBike rentBike(&bikeManager, &rentalManager, &input_file);
                            rentBike.StartRental(currentUser);
                        }
                        break;
                    }
                }
                break;
            }
            case 5: {
                switch (menu_level_2) {
                    case 1: { // 대여 리스트 조회
                        if (currentUser && !currentUser->GetIsAdmin()) {
                            RentalInfo rentalInfo(&rentalManager, &input_file);
                            rentalInfo.ShowUserRentalList(currentUser);
                        }
                        break;
                    }
                }
                break;
            }
            case 6: {
                switch (menu_level_2) {
                    case 1: { // 종료
                        Exit exitSys(&input_file);
                        exitSys.Terminate();
                        is_program_exit = 1;
                        break;
                    }
                }
                break;
            }
        }
    }
}

int main() {
    std::ifstream input_file("input.txt");
    doTask(input_file);
    input_file.close();
    return 0;
} 