#include <iostream>

int main()
{
    double hrs, mins, secs, conv_secs;

    std::cout << "*****************************************\n"
              << "         SECONDS SINCE MIDNIGHT          \n"
              << "*****************************************\n\n";


    std::cout << "This program calculates the number of seconds that has passed since midnight\n\n";

    do{
        std::cout << "Please Enter the current hour of the day(0-23)\n->";
        std::cin >> hrs;
        std::cout << '\n';
    }while(hrs > 23);
    do{
        std::cout << "Please Enter the current minute of the day(0-59)\n->";
        std::cin >> mins;
        std::cout << '\n';
    }while(mins > 59);
    do{
        std::cout << "Please Enter the current second of the day(0-59)\n->";
        std::cin >> secs;
        std::cout << '\n';
    }while(secs > 59);

    conv_secs = (hrs * 60 * 60) + (mins * 60) + secs;

    std::cout << "The time in seconds since midnight is: " << conv_secs << std::endl;

    std::cout << "Hrs:" << hrs << "  Mins:" << mins << "  2Secs:" << secs;

    return (0);
}
