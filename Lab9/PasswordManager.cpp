#include "PasswordManager.h"
#include <exception>
PasswordManager& PasswordManager::AddUser(const User& user)
{
    if (count < max_users)
    {
        for (int i = 0; i < count; i++)
            if (users[i] == user)
                return *this;
        users[count] = user;
        count++;
    }

    return *this;
}

WeakPasswordIterator PasswordManager::WeakPasswordIteratorBegin()
{
    return {0, count, users};
}

WeakPasswordIterator PasswordManager::WeakPasswordIteratorEnd()
{
    return {count, count, users};
}

User& PasswordManager::operator[](const char* name)
{
    for (int i = 0; i < count; i++)
        if (users[i] == name)
            return users[i];

    throw std::exception("da");
}
