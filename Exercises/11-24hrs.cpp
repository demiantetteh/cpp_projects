#include <iostream>

void subtractTime(int &hour1, int &min1, int &hour2, int &min2, int &thour, int &tmin);
void addTime(int &hour1, int &min1, int &hour2, int &min2,int &thour, int &tmin);
std::string hr12Time(int &hour, int &min);

int main()
{
    std::string mer;
    int hour1, min1; //24hr for first
    int hour2, min2; //24hr for second
    char op;
    int thour = 0, tmin = 0;

    std::cout << "Enter the first hour: ";
    std::cin >> hour1;

    std::cout << "Enter the first minute: ";
    std::cin >> min1;

    std::cout << "Enter the second hour: ";
    std::cin >> hour2;

    std::cout << "Enter the second hour: ";
    std::cin >> min2;

    std::cout << "Enter the operation: ";
    std::cin >> op;

    if(op == '+')
    {
        addTime(hour1, min1, hour2, min2, thour, tmin);
    }
    else if(op == '-')
    {
        subtractTime(hour1, min1, hour2, min2, thour, tmin);
    }
    hr12Time(thour, tmin);
    std::cout << thour << ":" << tmin << " " << mer << std::endl;

    return (0);
}

void addTime(int &hour1, int &min1, int &hour2, int &min2, int &thour,int &tmin)
{
    if(min1 + min2 > 60)
    {
        hour1 += 1;
    }

    tmin = (min1 + min2) % 60;
    thour = (hour1 + hour2) % 24;
}

void subtractTime(int &hour1, int &min1, int &hour2, int &min2,int &thour, int &tmin)
{
    if(min1 - min2 < 0)
    {
        min1 += 60;
        hour1 -= 1;
    }

    tmin = (min1 - min2) % 60;
    thour = (hour1 + hour2) % 24;
}

std::string hr12Time(int &thour, int &tmin)
{
    std::string mer;
    if (thour > 12)
    {
        thour -= 12;
        mer = "PM";
    }
    else{
        mer = "AM";
    }

    return mer;
}