#ifndef RENTAL_H_
#define RENTAL_H_

#include <string>

class User;
class Bike;

class Rental {
private:
    User* user_;
    Bike* bike_;

public:
    Rental(User* user, Bike* bike);
    
    const User* GetUser() const;
    const Bike* GetBike() const;
    std::string GetBikeDisplayInfo() const;
};

#endif  // RENTAL_H_ 