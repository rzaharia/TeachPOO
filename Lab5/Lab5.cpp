#include "Lab5.h"

Lab5::Lab5(int x) :x(x)
{
}

Lab5 operator-(const Lab5& l, const Lab5& r)
{
    Lab5 nou(l.GetX());
    nou.Add(r.GetX());
    return nou;
}
