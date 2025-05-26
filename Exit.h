#ifndef EXIT_H_
#define EXIT_H_

class ExitUI;

class Exit {
private:
    ExitUI* exit_ui_;

public:
    Exit(ExitUI* exit_ui);
    void Terminate();
};

#endif  // EXIT_H_ 