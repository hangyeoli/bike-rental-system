#ifndef USER_H_
#define USER_H_

#include <string>

// 사용자정보
class User {
private:
    std::string id_;        // 사용자ID
    std::string password_;  // 비밀번호
    std::string phone_;     // 전화번호
    bool is_admin_;         // 관리자여부

public:
    // 생성자
    User(const std::string& id, const std::string& password, 
         const std::string& phone, bool is_admin = false);
    
    // ID조회
    const std::string& GetId() const;
    // 비밀번호확인
    bool CheckPassword(const std::string& pw) const;
    // 전화번호조회
    const std::string& GetPhone() const;
    // 관리자여부조회
    bool GetIsAdmin() const;
};

#endif  // USER_H_ 