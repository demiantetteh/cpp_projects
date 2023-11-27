#include <iostream>

int main()
{
    double c, m;
    double x1, y1, x2, y2;

    std::cout << "********************************************\n"
              << "EQUATION OF A STRAIGHT LINE GIVEN TWO POINTS\n"
              << "********************************************\n\n";

    std::cout << "Please enter the first coordinate\n"
              << "X1: ";
    std::cin >> x1;
    std::cout << "Y1: ";
    std::cin >> y1;

    std::cout << "\nPlease enter the second coordinate\n"
              << "X2: ";
    std::cin >> x2;
    std::cout << "Y2: ";
    std::cin >> y2;

    std::cout << "FORMULA FOR GRADIENT\n"
              << "     Y2 - Y1\n"
              << "m =  -------\n"
              << "     X2 - X1\n\n";

    std::cout << "EQUATION OF STRAIGHT LINE(GENERIC FORM)\n"
              << " y = mx + c\n";

    m = (y2 - y1)/(x2 - x1);
    c = (m * x2) - y2;

    std::cout << "\nThe Gradient is: " << m << std::endl;
    std::cout << "The Constant is: " << c << std::endl;

    std::cout << "The equation of the line is\n"
              << "y = " << m << "x  + (" << c << ")" << std::endl;

    return (0);
}