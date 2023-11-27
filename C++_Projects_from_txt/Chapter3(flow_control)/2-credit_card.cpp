#include <iostream>

int main()
{
     double interest, total_amt, min_pay;
     double acct_bal, amt_owed;
     char ans;

     std::cout << "******************************************\n"
               << "              CREDIT CARD                 \n"
               << "******************************************\n\n";
     do{

        std::cout << "Enter your outstanding balance on your Credit Card\n->$";
        std::cin >> acct_bal;

        std::cout << "\nINTEREST RATES\n"
                  << "1.5% on the first $1,000\n"
                  << "1.0% on the remaining amount\n\n";

        interest = (0.015 * 1000) + (0.01 * (acct_bal - 1000));
        total_amt = acct_bal + interest;

        if (total_amt <= 10)
            min_pay = total_amt;
        else{
            amt_owed = 0.1 * total_amt;
            if(10 > amt_owed)
                min_pay = 10;
            else{
                min_pay = amt_owed;
            }
        }
        std::cout << "Interest due: $" << interest << std::endl
                  << "Total Amount due: $" << total_amt << std::endl
                  << "Minimum Payment: $" << min_pay << std::endl;
        std::cout << "\nPress 'R' to Restart the app or any other key to exit\n";
        std::cin >> ans;
        std::cout << "****************************************************" << std::endl;
    }while(ans == 'r' || ans == 'R');

    return (0);
}
