#ifndef BIKEMANAGER_H_
#define BIKEMANAGER_H_

#include <vector>
#include <memory>
#include "Bike.h"

// 자전거관리
class BikeManager {
private:
    std::vector<std::unique_ptr<Bike> > bikes_;  // 자전거목록

public:
    // 자전거추가
    void AddBike(std::unique_ptr<Bike> bike);
    // 자전거검색
    Bike* FindBikeById(const std::string& bike_id);
    // 자전거목록조회
    const std::vector<std::unique_ptr<Bike> >& GetBikes() const;
};

#endif  // BIKEMANAGER_H_ 