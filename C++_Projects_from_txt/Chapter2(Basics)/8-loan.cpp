#include <iostream>

int main()
{
    double rate, principal, time;
    double interest, nprincipal, repay;

    std::cout << "*****************************************************\n"
              << "                      LOAN APP                       \n"
              << "*****************************************************\n\n"
              << "[Please hit ENTER after entering your input]\n\n";

    std::cout << "Enter the amount of money($) you would like to borrow: ";
    std::cin >> principal;
    std::cout << "Enter the rate(%) per annum at which you would repay: ";
    std::cin >> rate;
    std::cout << "Enter the number of months you'll take to repay: ";
    std::cin >> time;
    std::cout << '\n' << std::endl;

    //math
    interest = principal * (rate/100.0) * (time/12.0);
    nprincipal = principal + interest;
    repay = nprincipal/time;

    std::cout << "You requested a principal of $" << principal << std::endl
              << "At a rate of " << rate << "% per annum\n"
              << "And you'll repay an amount of $"<< nprincipal << " over a period of "<< time << "months\n\n";

    std::cout << "Your monthly installment $" << repay << " per month\n\n"
              << "Thank you for using our services\n";

    return(0);

}
