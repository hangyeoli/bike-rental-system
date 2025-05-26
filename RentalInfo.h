#ifndef RENTALINFO_H_
#define RENTALINFO_H_

#include <string>

class RentalManager;
class RentalInfoUI;
class User;

class RentalInfo {
private:
    RentalManager* rental_manager_;
    RentalInfoUI* rental_info_ui_;

public:
    RentalInfo(RentalManager* rental_manager, RentalInfoUI* rental_info_ui);
    void ShowUserRentalList(User* user);
};

#endif  // RENTALINFO_H_ 