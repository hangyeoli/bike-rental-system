#include "User.h"

User::User(const std::string& id, const std::string& password, const std::string& phone, bool isAdmin)
    : id(id), password(password), phone(phone), isAdmin(isAdmin) {}

std::string User::getId() const {
    return id;
}

bool User::checkPassword(const std::string& pw) const {
    return password == pw;
}

std::string User::getPhone() const {
    return phone;
}

bool User::getIsAdmin() const {
    return isAdmin;
} 