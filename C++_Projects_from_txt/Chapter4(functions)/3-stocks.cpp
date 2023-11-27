#include <iostream>

double priceperstock(int wholedollar, int num, int den);
/**
 * valHolding: Calculates the Price per stock
 * @wholedollar: whole dollar portion of the price
 * @num: Numerator of the fraction portion
 * @den: Denominator of the fraction portion
 * Return: price per stock
 */

int main()
{
    char ans;

    do
    {
        int shares, whole, num, den;
        double perstock, valueholding;

        std::cout << "**********************************\n"
                  << " VALUE OF SHARE HOLDINGS OF STOCK \n"
                  << "**********************************\n\n";
        
        std::cout << "Enter the Number of shares owned: ";
        std::cin >> shares;
        std::cout << "Enter the whole dollar portion of the price: ";
        std::cin >> whole;
        std::cout << "Enter the numerator part of the fraction portion: ";
        std::cin >> num;
        std::cout << "Enter the denominator part of the fraction portion: ";
        std::cin >> den;

        perstock = priceperstock(whole, num, den);
        valueholding = perstock * shares;
        
        std::cout << "\nThe price per stock is $" << perstock << std::endl;
        std::cout << "The value of your Holdings is $" << valueholding << std::endl;

        std::cout << "\nPress 'R' to Restart the program\n";
        std::cout << "Press any other key to Exit\n->";
        std::cin >> ans;

        std::cout << '\n';

    } while (ans == 'r' || ans == 'R');

    return (0);
}
double priceperstock(int wholedollar, int num, int den)
{
    double frac, tot;

    frac = num / static_cast<double>(den);
    tot = wholedollar + frac;

    return (tot);
}