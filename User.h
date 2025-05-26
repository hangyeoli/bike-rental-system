#ifndef USER_H_
#define USER_H_

#include <string>

class User {
private:
    std::string id_;
    std::string password_;
    std::string phone_;
    bool is_admin_;

public:
    User(const std::string& id, const std::string& password, 
         const std::string& phone, bool is_admin = false);
    
    const std::string& GetId() const;
    bool CheckPassword(const std::string& pw) const;
    const std::string& GetPhone() const;
    bool GetIsAdmin() const;
};

#endif  // USER_H_ 