#ifndef RENTBIKEUI_H
#define RENTBIKEUI_H

#include <string>
#include <fstream>

class RentBikeUI {
private:
    std::ofstream outputFile;

public:
    RentBikeUI(const std::string& filename);
    ~RentBikeUI();
    void showRentResult(const std::string& bikeId, const std::string& model);
};

#endif 