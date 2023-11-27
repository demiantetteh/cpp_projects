#include <iostream>
#include <cmath>

int main()
{
    char ans;

    do
    {
        double factorial = 1, track = 0;
        int n = 100; // n = 1 to 100
        double euler;
        int j = 0; // increasing exponent
        int x;     // terms

        std::cout << "*******************************************\n"
                  << " EULER'S NUMBER EXPONENTATION APPROXIMATION\n"
                  << "*******************************************\n";
        // approximation = 1 + x + (x^2/2!) + (x^3/3!) + (x^4/4!) +..... (x^n/n!)

        std::cout << "==========================================\n"
                  << "This program approximates euler's number-\n"
                  << "raised to a power(your input)\n"
                  << "===========================================\n\n";

        std::cout << "Enter your desired exponent: ";
        std::cin >> x;

        for (int i = 1; i <= n; i++) // calculating factorials
        {
            factorial *= i;
            track += (pow(x, j + 1) / factorial);
            j++;
        }
        euler = 1 + track;

        std::cout << "Euler's Number: " << exp(x) << std::endl;
        std::cout << "Approximation: " << euler << std::endl;

        std::cout << "\nPress 'R' to restart the program\n"
                  << "Press ANY OTHER KEY  to exit\n";
        std::cin >> ans;
        std::cout << '\n';
    } while (ans == 'r' || ans == 'R');
    return (0);
}