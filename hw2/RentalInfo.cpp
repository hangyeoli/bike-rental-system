#include "RentalInfo.h"
#include "RentalManager.h"
#include "Rental.h"
#include "User.h"
#include "RentalInfoUI.h"
#include <vector>

RentalInfo::RentalInfo(RentalManager* rentalManager, RentalInfoUI* rentalInfoUI)
    : rentalManager(rentalManager), rentalInfoUI(rentalInfoUI) {}

void RentalInfo::showUserRentalList(User* user) {
    rentalInfoUI->showRentalListHeader();
    std::vector<Rental*> rentals = rentalManager->getRentalsByUser(user);
    for (Rental* rental : rentals) {
        std::string displayInfo = rental->getBikeDisplayInfo();
        size_t spacePos = displayInfo.find(' ');
        std::string bikeId = displayInfo.substr(0, spacePos);
        std::string model = displayInfo.substr(spacePos + 1);
        rentalInfoUI->showRentalInfo(bikeId, model);
    }
} 