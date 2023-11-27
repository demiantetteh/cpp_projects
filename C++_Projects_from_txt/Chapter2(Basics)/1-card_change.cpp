#include <iostream>

int main()
{
    double balance = 50.00;
    int count = 0;

    std::cout << "This program tells you how long it takes\n"
              << "to accumulate a debt of $100, starting with \n"
              << "an initial balance of $50 owed.\n"
              << "The interest rate is 2% per month.\n";

              while(balance < 100.00)
              {
                balance += (0.02 * balance);
                count++;
              }
    std::cout << "After " << count << " months, \n";
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);

    std::cout << "Your balance will be $" << balance << std::endl;

    return (0);
}
