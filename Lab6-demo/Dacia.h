#pragma once
#include "Car.h"
class Dacia: public Car
{
public:
    Dacia() : Car(10, 10.f) {}

    void ShowType() override;
};

