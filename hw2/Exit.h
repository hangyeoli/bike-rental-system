#ifndef EXIT_H
#define EXIT_H

class ExitUI;

class Exit {
private:
    ExitUI* exitUI;

public:
    Exit(ExitUI* exitUI);
    void terminate();
};

#endif 