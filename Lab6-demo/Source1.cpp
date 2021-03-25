#include "Dacia.h"
int main(int argc, char* argv[])
{
    Dacia d;
    d.ShowType();

    Car* c = &d;
    c->ShowType();
    return 0;
}
