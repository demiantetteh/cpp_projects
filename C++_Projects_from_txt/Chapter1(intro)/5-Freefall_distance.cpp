#include <iostream>

int main()
{
    std::cout << "              Distance from Freefall Calculator\n\n";
    std::cout << "          DISCLAIMER          \n";
    std::cout << "This calculator, calculates the distance neglecting any friction or air resitance\n\n";

    double time, distance;

    std::cout << "For how long would you be timing the object after being thrown\nEnter the time in seconds: ";
    std::cin >> time;
    std::cout << '\n';
    distance = (9.8 * (time * time))/2.0;
    std::cout << "The distance covered is: " << distance << "m\n";

    return (0);
}
