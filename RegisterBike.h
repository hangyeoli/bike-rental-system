#ifndef REGISTERBIKE_H_
#define REGISTERBIKE_H_

#include <string>

class BikeManager;
class RegisterBikeUI;

class RegisterBike {
private:
    BikeManager* bike_manager_;
    RegisterBikeUI* register_bike_ui_;

public:
    RegisterBike(BikeManager* bike_manager, RegisterBikeUI* register_bike_ui);
    void AddBike(const std::string& bike_id, const std::string& model);
};

#endif  // REGISTERBIKE_H_ 