#include <iostream>

int main ()
{
    double Fb, radius, volume, weight;
    const double Y = 62.4 ;// lb/ft^3 radius-> ft, weight -> lbs
    const double PI = 3.14159;

    std::cout << "*******************************\n"
              << "     BOUYANCY OF A SPHERE      \n"
              << "********************************\n\n";

    std::cout << "Please hit ENTER after entering your input\n";
    std::cout << "\nWhat is the weight of the sphere(lbs)?\n->";
    std::cin >> weight;
    std::cout << "\nWhat is the radius(ft) of the sphere?\n->";
    std::cin >> radius;

    volume = (4/3.0) * PI * (radius * radius * radius);
    Fb = volume * Y;

    if(Fb >= weight)
    {
        std::cout << "Your object will float\n";
    }
    else{
        std::cout << "Your object will sink\n";
    }
    return (0);
}