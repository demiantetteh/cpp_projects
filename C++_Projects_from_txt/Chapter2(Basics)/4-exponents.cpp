#include <iostream>

int main ()
{
    double base, og_base;
    int expo;

    std::cout << "*********************************************\n";
    std::cout << "This is an Exponent Calculator Program\n"
              << "Hit ENTER after entering your input\n";
    std::cout << "*********************************************\n\n";

    std::cout << "Enter the BASE of the exponent: ";
    std::cin >> og_base;
    base = og_base;
    std::cout << '\n';

    std::cout << "Enter the Exponent(whole number) of the base: ";
    std::cin >> expo;
    std::cout << '\n';

    if(base == 1)
        std::cout << "The answer is: " << base << std::endl;

     //dealing with negative exponents
    else if(expo < 0)
    {
        while(expo < -1)
        {
            base *= og_base;
            expo++;
        }
        base = 1.0/(base);
        std::cout.setf(std::ios::fixed);
        std::cout.setf(std::ios::showpoint);
        std::cout.precision(9);
        std::cout << "The answer is: " << base << std::endl;
    }
    else{
        while(expo > 1)
        {
            base *= og_base;
            expo--;
        }
        std::cout.setf(std::ios::fixed);
        std::cout.setf(std::ios::showpoint);
        std::cout.precision(1);

        std::cout << "The answer is: " << base << std::endl;
    }
    std::cout << "*********************************************\n" << std::endl;
    return (0);
}