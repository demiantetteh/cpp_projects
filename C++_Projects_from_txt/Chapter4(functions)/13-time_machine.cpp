#include <iostream>

int computedifference(int shour, int smin, bool sisAm, int fhour, int fmin, bool fisAm);
// computes the difference(in mins) between start time and future time
// returns: the difference(int)

int main()
{
    int shour, smin, fhour, fmin, diff;
    bool sisAm, fisAm;
    char start, future;

    std::cout << "*****************************************\n"
              << "    TIME TRAVEL 24HRS INTO THE FUTURE    \n"
              << "*****************************************\n\n";

    std::cout << "[START TIME DETAILS FOR TIME TRAVEL]\n";
    std::cout << "Enter the hour of the Start time(1-12)\n=>";
    std::cin >> shour;
    std::cout << "Enter the minute of the Start time(0-59)\n=>";
    std::cin >> smin;

    if ((shour > 12 || shour < 1) || (smin > 59 || smin < 0))
    {
        std::cout << "\n[START TIME ERROR]\n";
        std::cout << "Invalid Time Format\n";
        std::cout << "Restart the app and enter a valid format\n";
        return (0);
    }

    std::cout << "\nPress 'A' for A.M\n";
    std::cout << "Press 'P' for P.M\n=>";
    std::cin >> start;

    if ((start == 'a' || start == 'A') || (start == 'p' || start == 'P'))
    {
        if (start == 'a' || start == 'A')
            sisAm = true;
        else if (start == 'p' || start == 'P')
            sisAm = false;
    }
    else
    {
        std::cout << "\n[START TIME ERROR]\n";
        std::cout << "Invalid Meridiem Symbol\n";
        return (0);
    }

    std::cout << "\n[FUTURE TIME DETAILS FOR TIME TRAVEL]\n";
    std::cout << "Enter the hour of the future time(1-12)\n=>";
    std::cin >> fhour;
    std::cout << "Enter the minute of the future time(0-59)\n=>";
    std::cin >> fmin;

    if ((fhour > 12 || fhour < 1) || (fmin > 59 || fmin < 0))
    {
        std::cout << "\n[FUTURE TIME ERROR]\n";
        std::cout << "Invalid Time Format\n";
        std::cout << "Restart the app and enter a valid format\n";
        return (0);
    }

    std::cout << "\nPress 'A' for A.M\n";
    std::cout << "Press 'P' for P.M\n=>";
    std::cin >> future;

    if ((future == 'a' || future == 'A') || (future == 'p' || future == 'P'))
    {
        if (future == 'a' || future == 'A')
            fisAm = true;
        else if (future == 'p' || future == 'P')
            fisAm = false;
    }
    else
    {
        std::cout << "\n[FUTURE TIME ERROR]\n";
        std::cout << "Invalid Meridiem Symbol\n";
        return (0);
    }

    diff = computedifference(shour, smin, sisAm, fhour, fmin, fisAm);

    if (diff > 1440)
    {
        std::cout << "\n[ERROR]\n"
                  << "Time Travel into the future is 24hrs(1440mins) at most\n"
                  << "Into the future\n"
                  << "RESTART the app and enter a time with 24hrs difference or less\n";
    }
    else if (diff == 0)
    {
        std::cout << "\nARE YOU KIDDING!!!\n"
                  << "You are already in the present\n"
                  << "Or Perhaps you're in the same time for next day\n"
                  << "IF YOU GET WHAT I MEAN :)\n"
                  << "This App is for future time travel\n";
    }
    else
    {
        std::cout << "\n[SUCESS]\n"
                  << "Time Travel Success\n"
                  << "Careful not to meet your double\n"
                  << "Things could get messy, Take CARE\n";
    }

    return (0);
}
int computedifference(int shour, int smin, bool sisAm, int fhour, int fmin, bool fisAm)
{
    int sminutes, fminutes;

    // start time conversion to 24hr format
    if (sisAm == true && shour < 12)
        shour += 0;
    else if (sisAm == true && shour == 12)
        shour = 0;
    if (sisAm == false && shour < 12)
        shour += 12;
    else if (sisAm == false && shour == 12)
        shour += 0;

    // future time conversion to 24hr format
    if (fisAm == true && fhour < 12)
        fhour += 0;
    else if (fisAm == true && fhour == 12)
        fhour = 0;
    if (fisAm == false && fhour < 12)
        fhour += 12;
    else if (fisAm == false && fhour == 12)
        fhour += 0;

    sminutes = (shour * 60) + smin;
    fminutes = (fhour * 60) + fmin;

    return (fminutes - sminutes);
}