#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <vector>
#include <memory>
#include "User.h"

class UserManager {
private:
    std::vector<std::unique_ptr<User>> users;

public:
    UserManager();
    void addUser(std::unique_ptr<User> user);
    User* findUserById(const std::string& id);
};

#endif 