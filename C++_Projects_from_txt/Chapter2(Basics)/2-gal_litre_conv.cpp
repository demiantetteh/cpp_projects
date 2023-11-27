#include <iostream>

int main()
{
    double gal, lit;
    char ans;

    std::cout << "*************************************************************\n";
    std::cout << "This is a Converter for gallons to litres and vice versa\n"
              << "After every input please hit ENTER/RETURN\n";
    std::cout << "*************************************************************\n\n";

    std::cout << "In what unit would you like to convert to?\n"
              << " 'G' for gallon\n"
              << " 'L' for litres\n->";
    std::cin >> ans;

    if(ans == 'g' || ans == 'G')
    {
        std::cout << "Enter the number of Litres to be converted: ";
        std::cin >> lit;

        gal = lit / 3.785;

        std::cout.setf(std::ios::fixed);
        std::cout.setf(std::ios::showpoint);
        std::cout.precision(3);

        std::cout << lit << " litres is equal to " << gal << " gallons\n";
    }
    else if(ans == 'l' || ans == 'L')
    {
        std::cout << "Enter the number of Gallons to be converted: ";
        std::cin >> gal;

        lit = gal * 3.785;

        std::cout.setf(std::ios::fixed);
        std::cout.setf(std::ios::showpoint);
        std::cout.precision(3);

        std::cout << gal << " gallons is equal to " << lit << " litres\n";
    }
    else
    {
        std::cout << "ENTER A CHOICE BETWEEN THE OPTIONS PROVIDED\n"
                  << "RESTART THE APP\n";
    }
     std::cout << "*************************************************************\n\n";

     return(0);
}
