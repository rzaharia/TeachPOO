#pragma once
#include <cstring>
class User
{
    const char* name, * password;
public:
    User();
    User(const char* name, const char* password);

    bool operator==(const User& other) const;

    bool operator==(const char* other) const;

    const char* GetPassword() const;

    const char* GetUsername() const;
};

