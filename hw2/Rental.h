#ifndef RENTAL_H
#define RENTAL_H

#include <string>

class User;
class Bike;

class Rental {
private:
    User* user;
    Bike* bike;

public:
    Rental(User* user, Bike* bike);
    
    User* getUser() const;
    Bike* getBike() const;
    std::string getBikeDisplayInfo() const;
};

#endif 