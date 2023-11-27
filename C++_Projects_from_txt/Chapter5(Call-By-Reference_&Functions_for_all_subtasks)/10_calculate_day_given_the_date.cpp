#include <iostream>

bool isLeapYear(int year);
/**
 * isLeapYear: Checks if @year is a leap year
 * @year: The year entered by the user
 * return: True(if @year is a leap year), else false.
 */

int getCenturyValue(int year);
/**
 * getCenturyValue: Gets the century from the year
 *                  then divides the value by 4
 *                  Subtracts remainder from 3
 * @year: the year which was input
 * return: returns the value after subtraction
 *                  multiplied by two
 */

int getYearValue(int year);
/**
 * getYearValue: Computes a value based on the years
 *               since the beginning of the century
 *               Extracts the last two digits from year
 *               Divides by 4, discards remainder and
 *               adds result to the extracted digits.
 * @year: returns the sum
 * return: Returns an int after some calculations
 */

int getMonthValue(int month, int year);
/**
 * getMonthValue: Uses isLeapYear() to return values
 *                based on the months;
 * returns: value based on a table(used in the code)
 */

int getDayofWeekValue(int dayOfMonth, int month, int year);
/**
 * getDayofWeekValue: Calculates the Day of the week
 *                    0 = Sunday,...... 6 = Saturday
 * @dayofMonth: Day of the month(7th, 2nd etc)
 * @month: The month of the year
 * @year: The Year
 * return: The day of the week
*/

void getInput(int &dayofMonth, int &month, int &year);
/**
 * getInput: Prompts user for input for @month @year
 *           and @dayofMonth.
*/

bool validation(int &dayofMonth, int &month, int &year);
/**
 * validation: Checks if the given input is valid
 * return: True if input is valid, false if not
*/

int main()
{
    int dayofMonth, month, year;
    std::string day;
    bool val;
    char ans;

    do
    {
        do
        {
            getInput(dayofMonth, month, year);
            val = validation(dayofMonth, month, year);
        } while (val == false);

        int dayValue = getDayofWeekValue(dayofMonth, month, year);

        switch(dayValue)
        {
            case 0:
                day = "Sunday";
                break;
            case 1:
                day = "Monday";
                break;
            case 2:
                day = "Tuesday";
                break;
            case 3:
                day = "Wednesday";
                break;
            case 4:
                day = "Thursday";
                break;
            case 5:
                day = "Friday";
                break;
            case 6:
                day = "Saturday";
                break;
        }
        std::cout << "=========================\n"
                  << "          RESULTS        \n"
                  << "=========================\n";
        std::cout << "The Input Date: " << dayofMonth << "/" << month << "/" << year << std::endl
                  << "IS A " << day << std::endl
                  << '\n'; 
        std::cout << "Do you want to restart the App (y/n)\n=>";
        std::cin >> ans;
        std::cout << '\n';
    } while (ans == 'y' || ans == 'Y');
    
}
bool isLeapYear(int year)
{
    bool leap;
    if ((year % 400 == 0) || ((year % 4 == 0) && (!(year % 100 == 0))))
        leap = true;
    else
        leap = false;

    return (leap);
}
int getCenturyValue(int year)
{
    int century = year / 100;
    int rem = century % 4;
    int sub = 3 - rem;

    return (2 * sub);
}
int getYearValue(int year)
{
    int last_two = year % 100;
    int div = last_two / 4;

    return (last_two + div);
}
int getMonthValue(int month, int year)
{
    if (isLeapYear(year) == true)
    {
        if (month == 1)
            return (6);
        else if(month == 2)
            return (2);
    }
    else
    {
        switch (month)
        {
            case 1:
                return (0);
                break;
            case 2:
                return (3);
                break;
            case 3:
                return (3);
                break;
            case 4:
                return (6);
                break;
            case 5:
                return (1);
                break;
            case 6:
                return (4);
                break;
            case 7:
                return (6);
                break;
            case 8:
                return (2);
                break;
            case 9:
                return (5);
                break;
            case 10:
                return (0);
                break;
            case 11:
                return (3);
                break;
            case 12:
                return (5);
                break;
       }
    }
    return (3000);
}
int getDayofWeekValue(int dayOfMonth, int month, int year)
{
    int sum, rem;

    sum = dayOfMonth + getMonthValue(month, year) + getYearValue(year) + getCenturyValue(year);
    rem = sum % 7;

    return (rem);
}
void getInput(int &dayofMonth, int &month, int &year)
{
    std::cout << "*************************************\n"
              << "CALCULATE DAY OF WEEK GIVEN THE DATE \n"
              << "*************************************\n\n";

    std::cout << "DETAILS OF THE DATE FOR THE CALCULATION\n\n";

    std::cout << "Enter the Year (eg. 2003)\n=>";
    std::cin >> year;

    std::cout << "\nEnter the Month(1-12)\n[eg. 1 == January.... 12 == December]\n=>";
    std::cin >> month;

    std::cout << "\nEnter the Day of the Month (1-31)\n=>";
    std::cin >> dayofMonth;
}
bool validation(int &dayofMonth, int &month, int &year)
{
    bool ycheck = true, mcheck = true, dcheck = true;
    bool val = true;
    int MAXYEAR = 10000;

    if(year >= MAXYEAR || year <= 0)
    {
        std::cout << "-----YEAR ERROR-------\n";
        std::cout << "INVALID YEAR\n"
                  << "MAX YEAR IS 9999\n"
                  << "\nENTER A VALID YEAR\n"
                  << "-----------------------\n\n";
        ycheck = false;
    }
    else
        ycheck = true;
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            mcheck = true;
            if (dayofMonth > 31 || dayofMonth < 1)
            {
                std::cout << "------DAY ERROR------------------\n";
                std::cout << "INVALID DAY\n"
                          << "THE CHOSEN MONTH CANNOT HAVE MORE THAN 31 DAYS\n"
                          << "ENTER A VALID DAY\n"
                          << "-------------------------------\n\n";
                dcheck = false;
            }
            else
                dcheck = true;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            mcheck = true;
            if (dayofMonth > 30 || dayofMonth < 1)
            {
                std::cout << "------DAY ERROR------------------\n";
                std::cout << "INVALID DAY\n"
                          << "THE CHOSEN MONTH CANNOT HAVE MORE THAN 30 DAYS\n"
                          << "ENTER A VALID DAY\n"
                          << "----------------------------------\n\n";
                dcheck = false;
            }
            else
                dcheck = true;
            break;
        case 2:
            if (dayofMonth > 29 || dayofMonth < 1)
            {
                std::cout << "-------FEBRUARY DAY ERROR--------\n";
                std::cout << "INVALID DAY\n"
                          << "FEBRUARY CAN'T HAVE MORE THAN 29 DAYS\n"
                          << "\nENTER A VALID DAY\n"
                          << "----------------------------------\n\n";
                dcheck = false;
            }
            else
                dcheck = true;
            if (isLeapYear(year) && (dayofMonth > 29 || dayofMonth < 1))
            {
                std::cout << "----LEAP YEAR FEBRUARY DAY ERROR------\n";
                std::cout << "INVALID DAY\n"
                          << "FEBRUARY IN A LEAP YEAR\n"
                          << "HAVE MORE THAN 29 DAYS\n"
                          << "---------------------------------------\n\n";
                dcheck = false;
            }
            else
            dcheck = true;
            break;
        default:
            std::cout << "----------MONTH ERROR----------\n";
            std::cout << "INVALID MONTH\n";
            std::cout << "PLEASE ENTER A VALID MONTH\n";
            std::cout << "-------------------------------\n\n";
            if(dayofMonth < 1 || dayofMonth > 31)
            {
                std::cout << "------DAY ERROR------------------\n";
                std::cout << "INVALID DAY\n"
                          << "ENTER A VALID DAY\n"
                          << "-------------------------------\n\n";
                dcheck = false;
            }
            mcheck = false;
            break;

    }
    if (ycheck == true && mcheck == true && dcheck == true)
    {
        val = true;
        std::cout << "\n'''VALIDATION PASSED'''\n";
    }
    else{
        val = false;
        std::cout << "\n'''VALIDATION FAILED'''\n";
    }
    
    return (val);
}