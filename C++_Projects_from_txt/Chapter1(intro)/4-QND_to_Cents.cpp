#include <iostream>

int main()
{
    double dimes, nickels, quarters;
    double Cents;

    std::cout << "Q-N-D to Cents Program\n\n";
    std::cout << "Enter the number of Dimes: ";
    std::cin >> dimes;
    std::cout << '\n';
    std::cout << "Enter the number of Nickels: ";
    std::cin >> nickels;
    std::cout << '\n';
    std::cout << "Enter the number of Quarters: ";
    std::cin >> quarters;
    std::cout << '\n';

    dimes *= 10.0;
    nickels *= 5.0;
    quarters *= 25.0;

    Cents = dimes + nickels + quarters;

    std::cout << "The total worth in cents: " << Cents << '\n';

    return (0);
}
