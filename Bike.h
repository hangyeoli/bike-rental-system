#ifndef BIKE_H_
#define BIKE_H_

#include <string>

class User;

class Bike {
private:
    std::string bike_id_;
    std::string model_;
    bool available_;
    User* current_user_;

public:
    Bike(const std::string& bike_id, const std::string& model);
    
    const std::string& GetBikeId() const;
    const std::string& GetModel() const;
    bool IsAvailable() const;
    void Rent(User* user);
    void ReturnBike();
    const User* GetCurrentUser() const;
};

#endif  // BIKE_H_ 