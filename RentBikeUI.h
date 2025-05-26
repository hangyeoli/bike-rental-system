#ifndef RENTBIKEUI_H_
#define RENTBIKEUI_H_

#include <string>
#include <fstream>

class RentBikeUI {
private:
    std::ofstream output_file_;

public:
    RentBikeUI(const std::string& filename);
    ~RentBikeUI();
    void ShowRentBikeResult(const std::string& bike_id, const std::string& model);
};

#endif  // RENTBIKEUI_H_ 