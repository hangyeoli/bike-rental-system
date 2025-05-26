#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string id;
    std::string password;
    std::string phone;
    bool isAdmin;

public:
    User(const std::string& id, const std::string& password, const std::string& phone, bool isAdmin = false);
    
    std::string getId() const;
    bool checkPassword(const std::string& pw) const;
    std::string getPhone() const;
    bool getIsAdmin() const;
};

#endif 