#include "User.h"

// 생성자
User::User(const std::string& id, const std::string& password, const std::string& phone, bool is_admin)
    : id_(id), password_(password), phone_(phone), is_admin_(is_admin) {}

// ID조회
const std::string& User::GetId() const {
    return id_;
}

// 비밀번호확인
bool User::CheckPassword(const std::string& pw) const {
    return password_ == pw;
}

// 전화번호조회
const std::string& User::GetPhone() const {
    return phone_;
}

// 관리자여부조회
bool User::GetIsAdmin() const {
    return is_admin_;
} 