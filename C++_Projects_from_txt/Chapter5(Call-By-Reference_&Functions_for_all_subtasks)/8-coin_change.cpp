#include <iostream>

void computeCoins(int coinValue, int &num, int &amountLeft);

int main() {
    char repeat;
    
    std::cout << "*******************************\n"
              << "          COIN CHANGE          \n"
              << "*******************************\n\n";

    do {
        int amountLeft, quarters = 0, dimes = 0, pennies = 0;

        std::cout << "Enter the amount of change (1-99 cents): ";
        std::cin >> amountLeft;

        if (amountLeft < 1 || amountLeft > 99) {
            std::cout << "Invalid input. Please enter a valid amount between 1 and 99 cents.\n";
            continue;
        }

        computeCoins(25, quarters, amountLeft);
        computeCoins(10, dimes, amountLeft);
        computeCoins(1, pennies, amountLeft);

        std::cout << amountLeft << " cents can be given as:" << std::endl;
        std::cout << quarters << " quarter(s) ";
        std::cout << dimes << " dime(s) ";
        std::cout << "and " << pennies << " penny(pennies)\n";

        std::cout << "Do you want to calculate for another amount? (y/n): ";
        std::cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}

void computeCoins(int coinValue, int &num, int &amountLeft) {
    num = amountLeft / coinValue;
    amountLeft %= coinValue;
}
