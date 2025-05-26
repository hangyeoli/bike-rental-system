#ifndef BIKEMANAGER_H_
#define BIKEMANAGER_H_

#include <vector>
#include <memory>
#include "Bike.h"

class BikeManager {
private:
    std::vector<std::unique_ptr<Bike> > bikes_;

public:
    void AddBike(std::unique_ptr<Bike> bike);
    Bike* FindBikeById(const std::string& bike_id);
    const std::vector<std::unique_ptr<Bike> >& GetBikes() const;
};

#endif  // BIKEMANAGER_H_ 