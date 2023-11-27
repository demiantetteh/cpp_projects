#include <iostream>

int main()
{
    char ans;
    double loan, interest, rate, rem;
    double bal, installment, per;
    double total = 0;
    int month = 1;

    do{
        std::cout << "****************************************\n"
                  << "                LOAN APP                \n"
                  << "****************************************\n\n";

        std::cout << "What amount of Loan would you like to receive?\n-> $";
        std::cin >> loan;
        std::cout << "\nAt what interest rate per annum do you prefer?\n-> %";
        std::cin >> rate;

        std::cout.setf(std::ios::fixed);
        std::cout.setf(std::ios::showpoint);
        std::cout.precision(3);

        bal = loan;
        installment = (1/20.0) * loan;

        for(int i = 0; i < bal; i++)
        {
            interest = ((rate / 100.0) * bal)/12;
            rem = installment - interest;
            bal -= rem;

            total += interest;

            std::cout << "==================================\n";
            std::cout << "\t[Month " << month << "]\n";
            std::cout << "Interest:\t$" << interest << std::endl;
            std::cout << "Installment:\t$" << rem << std::endl;
            std::cout << "Balance:\t$" << bal << std::endl;
            month++;
        }
        std::cout << "\n\t[TOTAL]\n";
        std::cout << "Total Interest:\t$" << total << std::endl;
        per = (total / loan) * 100;
        std::cout << "Interest %:\t" << per << "%\n";
        std::cout << "Account Balance: $" << (-2 * bal) + bal << std::endl;

        std::cout << "\n\nPress 'R' to restart the app\n"
                  << "Press any other key to exit\n: ";
        std::cin >> ans;

        std::cout << '\n';
    }while(ans == 'R' || ans == 'r');

    }