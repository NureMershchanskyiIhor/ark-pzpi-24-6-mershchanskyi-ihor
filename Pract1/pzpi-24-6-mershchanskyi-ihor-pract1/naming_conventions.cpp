#include <string>

enum Statuses {
    Ok = 1,
    Error = 2
};

class UserAccount {
public:
    static constexpr int MAX_LOGIN_ATTEMPTS = 3;

    UserAccount(std::string username) : username_(std::move(username)) {}

    std::string getUsername() {
        return username_;
    }

private:
    std::string username_;
    int loginAttempts_ = 0;
};