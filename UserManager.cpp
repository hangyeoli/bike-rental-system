#include "UserManager.h"

UserManager::UserManager() {
    // 기본 관리자 계정 추가
    users_.push_back(std::make_unique<User>("admin", "admin", "", true));
}

void UserManager::AddUser(std::unique_ptr<User> user) {
    users_.push_back(std::move(user));
}

User* UserManager::FindUserById(const std::string& id) {
    for (auto& user : users_) {
        if (user->GetId() == id) {
            return user.get();
        }
    }
    return nullptr;
}

const std::vector<std::unique_ptr<User> >& UserManager::GetUsers() const {
    return users_;
} 