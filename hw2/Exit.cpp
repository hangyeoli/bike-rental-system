#include "Exit.h"
#include "ExitUI.h"

Exit::Exit(ExitUI* exitUI) : exitUI(exitUI) {}

void Exit::terminate() {
    exitUI->showExitMessage();
} 