#ifndef EXITUI_H
#define EXITUI_H

#include <string>
#include <fstream>

class ExitUI {
private:
    std::ofstream outputFile;

public:
    ExitUI(const std::string& filename);
    ~ExitUI();
    void showExitMessage();
};

#endif 