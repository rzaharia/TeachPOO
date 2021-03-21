#include "Phone.h"
#include <cstring>

char* Phone::get_name() const
{
    return name;
}

void Phone::set_name(char* name)
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

float Phone::get_stars()const
{
    return this->stars;
}

void Phone::set_stars(float stars)
{
    if (stars >= 0 && stars <= 5)
        this->stars = stars;
}

float Phone::get_price()const
{
    return price;
}

void Phone::set_price(float price)
{
    this->price = price;
}

float Phone::get_user_rating()const
{
    return user_rating;
}

void Phone::set_user_rating(float user_rating)
{
    this->user_rating = user_rating;
}

float Phone::get_average_price()const
{
    return price / stars;
}
