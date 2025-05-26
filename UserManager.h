#ifndef USERMANAGER_H_
#define USERMANAGER_H_

#include <vector>
#include <memory>
#include "User.h"

class UserManager {
private:
    std::vector<std::unique_ptr<User> > users_;

public:
    UserManager();
    void AddUser(std::unique_ptr<User> user);
    User* FindUserById(const std::string& id);
    const std::vector<std::unique_ptr<User> >& GetUsers() const;
};

#endif  // USERMANAGER_H_ 