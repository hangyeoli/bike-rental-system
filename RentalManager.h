#ifndef RENTALMANAGER_H_
#define RENTALMANAGER_H_

#include <vector>
#include <memory>
#include "Rental.h"

class User;

// 대여관리
class RentalManager {
private:
    std::vector<std::unique_ptr<Rental> > rentals_;  // 대여목록

public:
    // 대여추가
    void AddRental(std::unique_ptr<Rental> rental);
    // 사용자별대여조회
    std::vector<const Rental*> GetRentalsByUser(const User* user) const;
    // 대여목록조회
    const std::vector<std::unique_ptr<Rental> >& GetRentals() const;
};

#endif  // RENTALMANAGER_H_ 