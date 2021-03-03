#include "global_functions.h"

int compare_stars(const Phone& p1, const Phone& p2)
{
    float p1_stars = p1.get_stars();
    float p2_stars = p2.get_stars();
    if (p1_stars > p2_stars)
        return 1;
    if (p1_stars == p2_stars)
        return 0;
    return -1;
}
