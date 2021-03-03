#include "NumberList.h"
#include <cstdio>

void NumberList::Init()
{
    count = 0;
}

bool NumberList::Add(float x)
{
    if (count < 10)
    {
        numbers[count] = x;
        count++;
        return true;
    }

    return false;
}

void NumberList::Sort()
{
    for (int i = 0; i < count - 1; i++)
        for (int j = i; j < count; j++)
            if (numbers[i] > numbers[j])
            {
                int aux = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = aux;
            }
}

void NumberList::Print()
{
    for (int i = 0; i < count; i++)
        printf("Numarul %f de pe pozitia %d\n", numbers[i], i);
}
