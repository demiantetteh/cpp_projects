#include <iostream>
#include <cmath>

int main()
{
    double fare, distance, duration;
    int hrs, minute;
    char ans;

    do{
         std::cout << "********************************************\n"
                   << "              TAXI CAB FOR HIRE             \n"
                   << "********************************************\n";

        std::cout << "What is the distance(km) of the trip to be covered?\n->";
        std::cin >> distance;
        std::cout << "For how long(minutes) would the trip last?\n->";
        std::cin >> duration;
        duration = round(duration);
        std::cout << "At what time(24hr) did did the Journey begin?\n"
                  << "Hrs: ";
        std::cin >> hrs;
        std::cout << "Min: ";
        std::cin >> minute;
        std::cout << '\n';

        if(hrs <= 23 && minute <= 59 && duration > 0 && distance > 0)
        {
            //receipt + calculations for fare and/or surcharges
            std::cout << "********FARE RECEIPT********\n";
            std::cout << "Trip duration:\t" << duration << " mins\n";
            std::cout << "Trip distance:\t" << distance << " km\n";
            if(minute > 9)
                std::cout << "Start Time:\t" << hrs << ":" << minute << std::endl;
            else
                std::cout << "Start Time:\t" << hrs << ":0" << minute << std::endl;
            std::cout << "Total";
            fare = 3.2 + (2.05 * distance) + (0.95 * duration);

            //taking care of surcharge hours 23:00 - 6:00(6:59 exclusive)
            if(hrs < 6 || hrs == 23)
            {
                std::cout << "Fare:\t$" << fare << std::endl;
                std::cout << "\n15% surcharge:\t$" << 0.15 * fare
                          << "\napplied due to\nhour of hire\n";
                fare += (0.15 * fare);
                std::cout << "----------------------------------\n";
                std::cout << "Total Fee:\t$" << fare << std::endl;
            }
            else{
                std::cout << "Fare:\t$" << fare << std::endl;
            }
        }
        if(duration <= 0)
            std::cout << "PLEASE ENTER A VALID DURATION\n";
        if(distance <= 0)
            std::cout << "PLEASE ENTER A VALID DISTANCE\n";
        if(hrs >= 24 || minute >= 60)
            std::cout << "PLEASE ENTER A VALID TIME IN 24HRS FORMAT\n";

        std::cout << "\nPress 'Y' to hire a new taxi or to RESTART the APP\n";
        std::cout << "Press any other key to EXIT the APP\n->";
        std::cin >> ans;
    }while(ans == 'y' || ans == 'Y');

    return (0);
}