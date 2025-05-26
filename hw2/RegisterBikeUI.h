#ifndef REGISTERBIKEUI_H
#define REGISTERBIKEUI_H

#include <string>
#include <fstream>

class RegisterBikeUI {
private:
    std::ofstream outputFile;

public:
    RegisterBikeUI(const std::string& filename);
    ~RegisterBikeUI();
    void showRegisterResult(const std::string& bikeId, const std::string& model);
};

#endif 