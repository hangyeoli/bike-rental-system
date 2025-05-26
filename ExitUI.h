#ifndef EXITUI_H_
#define EXITUI_H_

#include <string>
#include <fstream>

class ExitUI {
private:
    std::ofstream output_file_;

public:
    ExitUI(const std::string& filename);
    ~ExitUI();
    void ShowExitMessage();
};

#endif  // EXITUI_H_ 