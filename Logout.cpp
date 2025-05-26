#include "Logout.h"
#include "LogoutUI.h"

Logout::Logout(LogoutUI* logout_ui)
    : logout_ui_(logout_ui) {}

void Logout::LogoutUser(const std::string& user_id) {
    logout_ui_->ShowLogoutResult(user_id);
} 