#pragma once
#include <iostream>

class Lab5
{
    int x;
public:
    Lab5(int x);

    int GetX() const
    {
        return x;
    }

    // <return ob/&> operator<nume> (<parametri>)

    bool operator<(/*Lab5 * this,*/int y) const
    {
        return this->x < 15;
    }

    friend bool operator>(const Lab5& l,int y)
    {
        return l.GetX() < y;
    }

    friend bool operator>(int y, const Lab5& l)
    {
        return y > l.GetX();
    }

    Lab5& operator+=(int x)
    {
        /*Lab5 nou(this->x);
        nou.x += x;
        return nou;*/
        this->x +=x;
        return *this;
    }

    Lab5& Set(int x)
    {
        this->x = x;
        return *this;
    }

    Lab5& Add(int x)
    {
        this->x += x;
        return *this;
    }

    Lab5& Multiply(int x)
    {
        this->x *= x;
        return *this;
    }

    void Print()
    {
        std::cout << x << std::endl;
    }

    Lab5 operator++(int)
    {
        Lab5 nou(this->GetX());
        ++(*this);
        return nou;
    }

    Lab5& operator++()
    {
        this->x += 1;
        return *this;
    }
};

Lab5 operator-(const Lab5& l, const Lab5& r);
