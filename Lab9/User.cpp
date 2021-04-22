#include "User.h"

User::User(): name(nullptr), password(nullptr)
{
}

User::User(const char* name, const char* password): name(name), password(password)
{
}

bool User::operator==(const User& other) const
{
    return strcmp(name, other.name) == 0;
}

bool User::operator==(const char* other) const
{
    return strcmp(name, other) == 0;
}

const char* User::GetPassword() const
{
    return password;
}

const char* User::GetUsername() const
{
    return name;
}
