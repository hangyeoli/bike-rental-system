#ifndef USERMANAGER_H_
#define USERMANAGER_H_

#include <vector>
#include <memory>
#include "User.h"

// 사용자관리
class UserManager {
private:
    std::vector<std::unique_ptr<User> > users_;  // 사용자목록

public:
    // 생성자
    UserManager();
    // 사용자추가
    void AddUser(std::unique_ptr<User> user);
    // 사용자검색
    User* FindUserById(const std::string& id);
    // 사용자목록조회
    const std::vector<std::unique_ptr<User> >& GetUsers() const;
};

#endif  // USERMANAGER_H_ 