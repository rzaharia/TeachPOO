#pragma once
#include <iostream>
class Car
{
    int fuel;
    float speed;
protected:
    Car(int fuel, float speed)
        : fuel(fuel), speed(speed)
    {}

public:
    int GetFuel();
    int GetSpeed();

    virtual void ShowType() = 0;
};

