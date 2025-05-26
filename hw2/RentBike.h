#ifndef RENTBIKE_H
#define RENTBIKE_H

#include <string>

class BikeManager;
class RentalManager;
class RentBikeUI;
class User;

class RentBike {
private:
    BikeManager* bikeManager;
    RentalManager* rentalManager;
    RentBikeUI* rentBikeUI;

public:
    RentBike(BikeManager* bikeManager, RentalManager* rentalManager, RentBikeUI* rentBikeUI);
    void rentBike(const std::string& bikeId, User* user);
};

#endif 