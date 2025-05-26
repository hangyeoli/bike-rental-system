#ifndef RENTBIKE_H_
#define RENTBIKE_H_

#include <string>

class BikeManager;
class RentalManager;
class RentBikeUI;
class User;

class RentBike {
private:
    BikeManager* bike_manager_;
    RentalManager* rental_manager_;
    RentBikeUI* rent_bike_ui_;

public:
    RentBike(BikeManager* bike_manager, RentalManager* rental_manager, 
             RentBikeUI* rent_bike_ui);
    void StartRental(const std::string& bike_id, User* user);
};

#endif  // RENTBIKE_H_ 