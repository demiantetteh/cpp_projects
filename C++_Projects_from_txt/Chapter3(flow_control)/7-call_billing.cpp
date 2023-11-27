#include <iostream>

int main()
{
    double duration, cost;
    int hrs, mins, day;
    char ans;
    std::string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    do{
        std::cout << "**************************************\n"
                  << "      PHONE BILLING(LONG DISTANCE)    \n"
                  << "**************************************\n\n";

        std::cout << "[Please hit ENTER after entering your input]\n\n";

        std::cout << "On what day did/would you make the CALL\n\n";
        std::cout << "Sunday(0)\tWednesday(3)\tFriday(5)\n"
                  << "Monday(1)\tThursday(4)\tSaturday(6)\n"
                  << "Tuesday(2)\n\nDAY: ";
        std::cin >> day;
        std::cout << '\n';
        std::cout << "What was/will be the duration(mins) of the CALL?\nDURATION: ";
        std::cin >> duration;
        std::cout << '\n';
        std::cout << "At what time(24hrs format) did/will you make the CALL?\n";
        std::cout << "Hrs: ";
        std::cin >> hrs;
        std::cout << "Mins: ";
        std::cin >> mins;

        if(day == 0 || day == 6)
            cost = 0.15 * duration;
        else if(day >= 1 && day <= 5)
        {
            if((hrs >= 8 && hrs < 18) && (mins >= 0 && mins <= 59))
                cost = 0.4 * duration;
            else if((hrs >= 18 && hrs < 7) && (mins >= 0 && mins <= 59))
                cost = 0.25 * duration;
            else{
                std::cout << "\nPLEASE ENTER A VALID TIME IN THE 24HRS FORMAT!!!\n"
                          << "RESTART THE APP\n";
            }
        }
        else{
            std::cout << "\nPLEASE ENTER THE CORRESPONDING DIGIT OF THE DAY\n"
                      << "RESTART THE APP\n";
        }
        std::cout << "\n\n********CALL RECEIPT*********\n";
        std::cout << "Call Duration:\t" << duration << "mins" << std::endl
                  << "Time:\t\t" << hrs << ":" << mins << std::endl
                  << "Day:\t\t" << days[day] << std::endl
                  << "----------------------------\n"
                  << "TOTAL COST:\t$" << cost << std::endl;

        std::cout << "\nPress 'R' to RESTART the APP or any other key to exit\n->";
        std::cin >> ans;
    }while(ans == 'r' || ans == 'R');
    return (0);
}