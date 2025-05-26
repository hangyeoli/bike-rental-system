#ifndef RENTALMANAGER_H
#define RENTALMANAGER_H

#include <vector>
#include <memory>
#include "Rental.h"

class User;

class RentalManager {
private:
    std::vector<std::unique_ptr<Rental>> rentals;

public:
    void addRental(std::unique_ptr<Rental> rental);
    std::vector<Rental*> getRentalsByUser(User* user);
};

#endif 