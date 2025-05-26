#ifndef RENTALINFOUI_H
#define RENTALINFOUI_H

#include <string>
#include <fstream>

class RentalInfoUI {
private:
    std::ofstream outputFile;

public:
    RentalInfoUI(const std::string& filename);
    ~RentalInfoUI();
    void showRentalListHeader();
    void showRentalInfo(const std::string& bikeId, const std::string& model);
};

#endif 