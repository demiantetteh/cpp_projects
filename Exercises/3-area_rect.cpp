#include <iostream>

int main()
{
    double length, width, area;

    std::cout << "*************************************************\n";
    std::cout << "This program calculates the Area of a Rectangle\n";
    std::cout << "*************************************************\n";

    std::cout << "Enter the Length: ";
    std::cin >> length;
    std::cout << "Enter the width: ";
    std::cin >> width;

    area = length * width;

    std::cout << "Area: " << area ;

    return (0);
}
