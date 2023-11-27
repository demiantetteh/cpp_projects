#include <iostream>

double Cinterest(double bal, double rate, int month);
/**
 * interest: Computes the compounded interest on a credit card balance
 * bal: Balance of the credit card
 * rate: Monthly interest rate
 * month: Months for which interest+Balance is due
 * return: Interest due
 */

int main()
{
    char ans;

    do
    {
        double bal, rate, interest;
        int months;

        std::cout << "**************************************************\n"
                  << "COMPOUNDED INTEREST ON CREDIT CARD ACCOUNT BALANCE\n"
                  << "**************************************************\n\n";

        std::cout << "Enter the Initial Credit Card balance: $";
        std::cin >> bal;
        std::cout << "Enter the Monthly Interest Rate(%): ";
        std::cin >> rate;
        std::cout << "Enter the Number of Months to pay amounts due: ";
        std::cin >> months;

        if (bal > 0 && months > 0 && rate > 0)
        {
            interest = Cinterest(bal, rate, months);

            std::cout << '\n';
            std::cout << "-----------------------------------\n"
                      << "Interest + Balance Due is: $" << interest << std::endl
                      << "-----------------------------------\n";
        }
        else
        {
            std::cout << "INVALID INPUT\n"
                      << "Please Enter a valid input\n"
                      << "RESTART the App\n";
        }

        std::cout << "\nPress 'R' to Restart the App\n"
                  << "Press any other key to exit\n=>";
        std::cin >> ans;
        std::cout << '\n';

    } while (ans == 'r' || ans == 'R');

    return (0);
}
double Cinterest(double bal, double rate, double month)
{
    int interest;
    rate /= 100.0;
    double initial = bal;

    for(int i = 1; i <= month; i++)
    {
        interest = bal * rate;
        bal += interest;
    }
    interest = bal - initial;

    return (interest);
}