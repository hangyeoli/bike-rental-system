#include "User.h"

User::User(const std::string& id, const std::string& password, const std::string& phone, bool is_admin)
    : id_(id), password_(password), phone_(phone), is_admin_(is_admin) {}

const std::string& User::GetId() const {
    return id_;
}

bool User::CheckPassword(const std::string& pw) const {
    return password_ == pw;
}

const std::string& User::GetPhone() const {
    return phone_;
}

bool User::GetIsAdmin() const {
    return is_admin_;
} 