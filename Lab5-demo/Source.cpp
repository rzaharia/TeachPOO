#include <iostream>

#include "Lab5.h"

int main(int argc, char* argv[])
{
    Lab5 a(10), b(20);

    if (a.operator<(15))//a < 15)
    {
        std::cout << "a < 15" << std::endl;
    }

    //operator>(b, 15);
    if (b > 15)
    {
        std::cout << "b > 15" << std::endl;
    }

    //operator>(15, b);
    if(15 > b)
    {
        std::cout << "15 > b" << std::endl;
    }

    Lab5 c = 10;

    (c += 20) += 40;//c.x --> 70
    (c.operator+=(20)).operator+=(40);

    Lab5 d = 10;
    d.Set(2).Add(1).Add(2).Multiply(3).Print();

    Lab5 e = b - a;
    Lab5 e2 = operator-(b,a);
    

    int i = 5;
    int z = i++;//z = 5, i=6

    int t = ++i;

    Lab5 f = e++;
    (++e).GetX();

    Lab5 g = -e;

    return 0;
}
