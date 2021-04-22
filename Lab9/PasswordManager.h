#pragma once
#include "User.h"
#include "WeakPasswordIterator.h"

constexpr size_t max_users = 100;

class PasswordManager
{
    User users[max_users];
    int count;
public:
    PasswordManager():count(0){}

    PasswordManager& AddUser(const User& user);

    WeakPasswordIterator WeakPasswordIteratorBegin();

    WeakPasswordIterator WeakPasswordIteratorEnd();

    User& operator[](const char* name);
};

