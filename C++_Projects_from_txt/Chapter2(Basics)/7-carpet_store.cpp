#include <iostream>

int main()
{
    double length, dis_length;
    const double price = 2.75, dis_price = 2.75 - (2.75 * 0.15);
    double bill, dis_bill;
    std::cout << "********************************************************\n"
              << "                  CARPET STORE                          \n"
              << "********************************************************\n"
              << "  PRICING                                               \n"
              << "  1m    = $2.75                                         \n"
              << "  10m+  = 15% discount on every if you buy more than 10 \n"
              << "********************************************************\n\n";

    std::cout << "[Hit ENTER after entering your input]\n\n"
              << "What length(meters) of Carpet are you purchasing?\n->";
    std::cin >> length;

    if(length > 0 && length <= 10)
    {
        bill = length * price;
        std::cout << "Your total cost for " << length << " meters is: $" << bill;
    }
    else if(length > 10)
    {
        dis_length = length - 10;
        dis_bill = dis_length * dis_price;
        bill = dis_bill + (10 * price);

        std::cout << "Your total cost for " << length << " meters including the discounted price is: $" << bill;
        std::cout << '\n' << std::endl;
    }
    else{
        std::cout << "PLEASE ENTER A POSITIVE NUMBER\n";
    }

    return (0);
}
