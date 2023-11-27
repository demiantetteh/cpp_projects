#include <iostream>

//This is just a test function to calculate discount applicable on a price

double calculate_discount(double &price, double discount, bool is_percentage)
{
    if(is_percentage == true)
    {
        discount /= 100.0;
        price -= (price * discount);
    }
    else if(is_percentage == false)
        price -= discount;

    return (price);

}