#ifndef REGISTERBIKEUI_H_
#define REGISTERBIKEUI_H_

#include <string>
#include <fstream>

class RegisterBikeUI {
private:
    std::ofstream output_file_;

public:
    RegisterBikeUI(const std::string& filename);
    ~RegisterBikeUI();
    void ShowRegisterBikeResult(const std::string& bike_id, 
                               const std::string& model);
};

#endif  // REGISTERBIKEUI_H_ 