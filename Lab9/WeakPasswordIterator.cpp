#include "WeakPasswordIterator.h"

bool WeakPasswordIterator::operator!=(const WeakPasswordIterator& other) const
{
    return index != other.index;
}

//const char* WeakPasswordIterator::operator*() const
//{
//    return users[index].GetPassword();
//}

WeakPasswordIterator& WeakPasswordIterator::operator++()
{
    index++;
    //while (index < count)
    //{
    //    if (strlen(users[index].GetPassword()) >= 8)
    //        index++;
    //    else
    //        break;
    //}
    return *this;
}

WeakPasswordIteratorData WeakPasswordIterator::operator*() const
{
    return {index, users[index].GetUsername(), (int)strlen(users[index].GetPassword())};
}
