#ifndef BIKE_H
#define BIKE_H

#include <string>

class User;

class Bike {
private:
    std::string bikeId;
    std::string model;
    bool available;
    User* currentUser;

public:
    Bike(const std::string& bikeId, const std::string& model);
    
    std::string getBikeId() const;
    std::string getModel() const;
    bool isAvailable() const;
    void rent(User* user);
    void returnBike();
    User* getCurrentUser() const;
};

#endif 