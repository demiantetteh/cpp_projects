#include <iostream>

int main()
{
    double a, Lc, Tc;
    double Li, Lf, Ti, Tf;

    std::cout << "****************************************************\n"
              << "\t    THERMAL EXPANSION AND CONTRACTION   \n"
              << "*****************************************************\n\n";

    std::cout << "SYMBOLS\n"
              << "a = coefficient of linear expansion\n"
              << "Lf = Final Length \t\tLi = Initial Length\n"
              << "Tf = Final Temperature \t\tTi = Initial Temperature\n"
              << "Lc = Change in Length \t\tTc = Change in Temperature\n\n"
              << "    FORMULAS     \n"
              << " Lc = a * Li * Tc\n"
              << " Lc = Lf - Li\n"
              << " Tc = Tf - Ti\n";

    std::cout << "Enter the initial Temperature(Celsius): ";
    std::cin >> Ti;
    Ti += 273.15;

    std::cout << "Enter the final Temperature(Celsius): ";
    std::cin >> Tf;
    Tf += 273.15;

    Tc = Tf - Tc;

    std::cout << "Enter the initial Length(meters): ";
    std::cin >> Li;
    std::cout << "Enter the final Length(meters): ";
    std::cin >> Lf;

    //Lc = Lf - Li;
    a = Lc / (Tc * Li);
    Lc = a * Li * Tc;

    std::cout << "The coefficient of Linear expansion(a) is: " << a << std::endl;
    std::cout << "The Change in Length(Lc) is: " << Lc << std::endl;
    std::cout << "The Change in Temperature(Tc) is: " << Tc << std::endl;
}
