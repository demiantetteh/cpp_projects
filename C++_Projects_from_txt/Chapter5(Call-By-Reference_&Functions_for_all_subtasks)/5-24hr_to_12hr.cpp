#include <iostream>

void getTimeInput(int &hour, int &min);
/**
 * getTimeInput: Takes Input of time in 24hr format
 * @hour: the hour in 24hr
 * @min: the minute
*/

char convert(int &hour);
/**
 * convert: Converts time to 12hr format
 * @hour: the hour in 12hr
 * return: 'A' indicating AM
 *         'P' indicating PM
*/

void displayConvertedTime(int hour, int min, char mer);
/**
 * displayConvertedTime: Displays the converted time
 * @hour: Converted hour
 * @min: minutes
 * @mer: Meridiem
*/

int main()
{
    char ans;
    do{
        int hour, min;
        char mer;

        std::cout << "***************************\n"
                  << " 24HR TO 12HR TIME FORMAT  \n"
                  << "***************************\n";
        
        getTimeInput(hour, min);
        while (((hour > 24) || (hour < 0)) || ((min < 0) || (min > 59)))
        {
            std::cout << "Incorrect Input\n";
            getTimeInput(hour, min);
        }
        mer = convert(hour);

        displayConvertedTime(hour, min, mer);

        std::cout << "\nPress 'R' to Restart the app\n"
                  << "Press any other key to EXIT\n=>";
        std::cin >> ans;
        std::cout << std::endl;

    } while (ans == 'r' || ans == 'R');
    std::cout << "Thank You :)\n";
}
void getTimeInput(int &hour, int &min)
{
    std::cout << "\nEnter the Time in 24hr format\n";
    std::cout << "Hour: ";
    std::cin >> hour;
    std::cout << "Minute: ";
    std::cin >> min;
}
char convert(int &hour)
{
    char mer;

    if(hour > 12)
    {
        hour -= 12;
        mer = 'P';
    }
    else if (hour < 12)
    {
        mer = 'A';
        if(hour == 0)
            hour = 12;
    }
    return (mer);
}
void displayConvertedTime(int hour, int min, char mer)
{
    std::string wMeridiem;

    if(mer == 'A')
        wMeridiem = "AM";
    else if(mer == 'P')
        wMeridiem = "PM";
    if(min < 10)
    {
    std::cout << "\n[Converted Time]\n"
              << "Time: " << hour << ":0" << min << " " << wMeridiem << std::endl;
    }
    else{
        std::cout << "\n[Converted Time]\n"
              << "Time: " << hour << ":" << min << " " << wMeridiem << std::endl;
    }
}