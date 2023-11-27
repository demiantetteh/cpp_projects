#include <iostream>

int main()
{
    double change, pay;
    double totalpay = 0;
    int amount;

    std::cout << "***********************************\n"
              << " DEEP FRY TWINKIE VENDING MACHINE \n"
              << "***********************************\n\n";
    

    std::cout << "              [WELCOME]             \n" 
              << "------------------------------------\n"
              << "This vending machine only accepts USD$\n"
              << "i.e. You can only input coins, dollar, dimes\n"
              << "quarters, and nickels at a time and no foreign $$\n\n";

    std::cout << "\n==============[PRICE]============\n"
              << "DEEP FRY TWINKIE(1) = $3.50\n";
    
    do{
        std::cout << "\nInsert a coin for your twinkie :) :$ ";
        std::cin >> pay;

        if(pay == 1 || pay == 0.10 || pay == 0.25 || pay == 0.05)
        {
            totalpay += pay;
            std::cout << "\nTotal Inserted: $" << totalpay << std::endl;
        }
        else{
            std::cout << "\nHMMMM That's a Strange Coin\n"
                      << "Sorry, It's Invalid\n";
            std::cout << "Insert a valid coin for your twinkie\n";
        }
    }while(totalpay < 3.50);

    change = totalpay - 3.50;

    std::cout << "\n\nHere is your TWINKIE :)\n";
    std::cout << "Your change is: $" << change << std::endl;
    std::cout << "ENJOY YOUR TWINKIE\n";

}