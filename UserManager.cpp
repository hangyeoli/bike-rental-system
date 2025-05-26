#include "UserManager.h"

// 생성자
UserManager::UserManager() {
    // 기본 관리자 계정 추가
    users_.push_back(std::make_unique<User>("admin", "admin", "", true));
}

// 사용자추가
void UserManager::AddUser(std::unique_ptr<User> user) {
    users_.push_back(std::move(user));
}

// 사용자검색
User* UserManager::FindUserById(const std::string& id) {
    for (auto& user : users_) {
        if (user->GetId() == id) {
            return user.get();
        }
    }
    return nullptr;
}

// 사용자목록조회
const std::vector<std::unique_ptr<User> >& UserManager::GetUsers() const {
    return users_;
} 