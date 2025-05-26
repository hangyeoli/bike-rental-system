#ifndef RENTALINFO_H
#define RENTALINFO_H

#include <string>

class RentalManager;
class RentalInfoUI;
class User;

class RentalInfo {
private:
    RentalManager* rentalManager;
    RentalInfoUI* rentalInfoUI;

public:
    RentalInfo(RentalManager* rentalManager, RentalInfoUI* rentalInfoUI);
    void showUserRentalList(User* user);
};

#endif 