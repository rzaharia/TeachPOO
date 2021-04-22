#pragma once
#include "User.h"

struct WeakPasswordIteratorData
{
    int index;
    const char* username;
    int passwordLength;
};

class WeakPasswordIterator
{
    int index, count;
    User* users;
public:
    WeakPasswordIterator(int index, int count, User* users) : index(index), count(count), users(users) {}

    bool operator!=(const WeakPasswordIterator& other) const;

    //const char* operator*() const;

    WeakPasswordIteratorData operator*() const;

    WeakPasswordIterator& operator++();
};

