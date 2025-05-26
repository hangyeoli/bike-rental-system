#include "Exit.h"
#include "ExitUI.h"

Exit::Exit(ExitUI* exit_ui)
    : exit_ui_(exit_ui) {}

void Exit::Terminate() {
    exit_ui_->ShowExitMessage();
} 