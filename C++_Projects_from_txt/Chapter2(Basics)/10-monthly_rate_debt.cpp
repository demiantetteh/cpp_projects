#include <iostream>

int main()
{
    double cost, rate, mbal;
    double install, interest, debt;
    double tot_interest = 0;
    double month = 1;

    std::cout << "******************************************************************************\n"
              << "          DEBT CALCULATOR BASED ON MONTHLY INTEREST AND INSTALLMENTS          \n"
              << "******************************************************************************\n\n";

    std::cout << "What's the cost of the item you bought on"
              << "the credit plan with no down payments?\n->";
    std::cin >> cost;

    std::cout << "\nInterests are calculated monthly (i.e on the debt you owe in that month)\n";
    std::cout << "At what rate per annum or you paying it off with?\n->";
    std::cin >> rate;

    std::cout << "\nWhat's will be your monthly installment?\n->";
    std::cin >> install;

    mbal = cost;

    while(mbal > 0 && debt != install)
    {
        interest = mbal * ((rate/12.0) / 100.0);
        debt = mbal + interest - install;

        std::cout << "################## MONTH " << month <<" ########################\n";
        std::cout << "In month: "<< month << " your debt was $" << mbal << std::endl
                  << "At an interest rate of " << rate << "% per annum" << std::endl
                  << "The amount of interest for that month was $" << interest << std::endl
                  << "You then paid an amount of $" << install << std::endl;


        mbal = debt;
        std::cout << "Your new outstanding debt is $" << mbal << std::endl;

        month++;
        tot_interest += interest;
        std::cout << '\n' << std::endl;

    }
    std::cout << "\n\n-----------------------TOTAL(FINAL CHECKOUT)----------------------------------\n";
    std::cout << "\tYou'll use an amount of " << month << " months to pay off your debt of $" << cost << std::endl
              << "\tAt an interest rate of " << rate << "% per annum" << std::endl
              << "\tWith monthly installments $" << install << std::endl
              << "\tThe total interest is $" << tot_interest << std::endl;

    std::cout << "\n\tWe Serve you BETTER\t\n"
              << "\tTHANK YOU FOR USING OUR SERVICE\n" << std::endl;

    return (0);

    /**
     * TEXTBOOK INPUT
     * cost = 1000
     * rate = 18
     * install = 50
     */
}