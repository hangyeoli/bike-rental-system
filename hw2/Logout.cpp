#include "Logout.h"
#include "LogoutUI.h"

Logout::Logout(LogoutUI* logoutUI) : logoutUI(logoutUI) {}

void Logout::logout(const std::string& userId) {
    logoutUI->showLogoutResult(userId);
} 