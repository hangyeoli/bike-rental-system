#include "UserManager.h"

UserManager::UserManager() {
    // 기본 관리자 계정 추가
    users.push_back(std::make_unique<User>("admin", "admin", "", true));
}

void UserManager::addUser(std::unique_ptr<User> user) {
    users.push_back(std::move(user));
}

User* UserManager::findUserById(const std::string& id) {
    for (auto& user : users) {
        if (user->getId() == id) {
            return user.get();
        }
    }
    return nullptr;
} 