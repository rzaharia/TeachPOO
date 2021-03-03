#pragma once
class Phone
{
    char* name;
    float stars, price, user_rating;
public:
    char * get_name() const;
    void set_name(char* name);

    float get_stars() const;
    void set_stars(float stars);

    float get_price() const;
    void set_price(float price);

    float get_user_rating() const;
    void set_user_rating(float user_rating);

    float get_average_price();
};

