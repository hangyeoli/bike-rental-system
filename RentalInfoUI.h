#ifndef RENTALINFOUI_H_
#define RENTALINFOUI_H_

#include <string>
#include <fstream>

class RentalInfoUI {
private:
    std::ofstream output_file_;

public:
    RentalInfoUI(const std::string& filename);
    ~RentalInfoUI();
    void ShowRentalListHeader();
    void ShowRentalInfo(const std::string& bike_id, const std::string& model);
    void ShowRentalListFooter();
    void ShowRentalInfoResult(const std::string& bike_id, 
                             const std::string& model);
};

#endif  // RENTALINFOUI_H_ 