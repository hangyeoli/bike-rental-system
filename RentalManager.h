#ifndef RENTALMANAGER_H_
#define RENTALMANAGER_H_

#include <vector>
#include <memory>
#include "Rental.h"

class User;

class RentalManager {
private:
    std::vector<std::unique_ptr<Rental> > rentals_;

public:
    void AddRental(std::unique_ptr<Rental> rental);
    std::vector<const Rental*> GetRentalsByUser(const User* user) const;
    const std::vector<std::unique_ptr<Rental> >& GetRentals() const;
};

#endif  // RENTALMANAGER_H_ 