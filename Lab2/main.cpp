#include <cstdio>
//#include "NumberList.h"
#include "global_functions.h"
int main()
{
    //NumberList nl;
    //nl.Init();
    //for(int i=15;i>0;i--)
    //{
    //    printf("Adaugam numarul %d rezultat %d\n", i, nl.Add(i));
    //}
    //nl.Sort();
    //nl.Print();
    Phone p1;
    p1.set_name((char*)"p1");
    p1.set_stars(3.5f);
    p1.set_price(100);
    p1.set_user_rating(1);

    Phone p2;
    p2.set_name((char*)"p2");
    p2.set_stars(4.f);
    p2.set_price(200);
    p2.set_user_rating(2);

    printf("p1 comparat p2 %d", compare_stars(p1, p2));

    Demo d = { 1,2,3 };
    return 0;
}