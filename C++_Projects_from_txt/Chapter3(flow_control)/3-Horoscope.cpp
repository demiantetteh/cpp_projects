#include <iostream>
#include <string.h>

int main()
{
    int month, day, cusp;
    char ans;
    std::string compatible_sign, wmonth, sign, wcusp, element;


    std::cout << "**************************************************\n"
              << "        HOROSCOPE SIGN BASED ON BIRTHDAY          \n"
              << "**************************************************\n";

    do{
        std::cout << "BIRTHDAY DETAILS\n";
        std::cout << "Month(1-12): ";
        std::cin >> month;
        std::cout << "Day(1-31): ";
        std::cin >> day;
        cusp = day;
        wcusp.empty();

        if ((month > 12) || (month <= 0))
        {
            std::cout << "\nINVALID MONTH\n";
            std::cout << "PLEASE ENTER FROM THE PROVIDED RANGE\n";
            std::cout << "RESTART THE APP\n\n";
        }
        if((day > 31) || (day <= 0))
        {
            std::cout << "\nINVALID DAY\n";
            std::cout << "PLEASE ENTER FROM THE PROVIDED RANGE\n";
            std::cout << "RESTART THE APP\n\n";
        }
        if ((month == 2) && day > 29)
        {
            std::cout << "\nFEBRUARY DOES NOT HAVE 30 OR MORE DAYS\n"
                      << "PLEASE ENTER VALID INPUT\n"
                      << "RESTART THE APP\n\n";
        }
        if((month <= 12 && month > 0) && (day <= 31 && day > 0))
        {

            if((month == 3 && day >= 21) || (month == 4 && day <= 19))
            {
                if (month == 3)
                    wmonth = "March";
                else if (month == 4)
                    wmonth = "April";
                sign = "Aries";
                compatible_sign = "Leo and Sagittarius";
                element = "Fire";
                if((cusp + 1 == 20) || (cusp + 2 == 20))
                   wcusp = "Taurus";
            }
            if((month == 4 && day >= 20) || (month == 5 && day <= 20))
            {
                if (month == 4)
                    wmonth = "April";
                else if (month == 5)
                    wmonth = "May";
                sign = "Taurus";
                compatible_sign = "Virgo and Capricorn";
                element = "Earth";
                if((cusp + 1 == 21) || (cusp + 2 == 21))
                   wcusp = "Gemini";
            }
            if((month == 5 && day >= 21) || (month == 6 && day <= 21))
            {
                if (month == 5)
                    wmonth = "May";
                else if (month == 6)
                    wmonth = "June";
                sign = "Gemini";
                compatible_sign = "Libra and Aquarius";
                element = "Air";
                if((cusp + 1 == 22) || (cusp + 2 == 22))
                   wcusp = "Cancer";
            }
            if((month == 6 && day >= 22) || (month == 7 && day <= 22))
            {
                if (month == 6)
                    wmonth = "June";
                else if (month == 7)
                    wmonth == "July";
                sign = "Cancer";
                compatible_sign = "Scorpio and Pisces";
                element = "Water";
                if((cusp + 1 == 20) || (cusp + 2 == 20))
                   wcusp = "Leo";
            }
            if((month == 7 && day >= 23) || (month == 8 && day <= 22))
            {
                if (month == 7)
                   wmonth = "July";
                else if(month == 8)
                    wmonth = "August";
                sign = "Leo";
                compatible_sign = "Aries and Sagittarius";
                element = "Fire";
                if((cusp + 1 == 23) || (cusp + 2 == 23))
                   wcusp = "Virgo";
            }
            if((month == 8 && day >= 23) || (month == 9 && day <= 22))
            {
                if (month == 8)
                   wmonth = "August";
                else if(month == 9)
                    wmonth = "September";
                sign = "Virgo";
                compatible_sign = "Taurus and Capricorn";
                element = "Earth";
                if((cusp + 1 == 23) || (cusp + 2 == 23))
                   wcusp = "Libra";
            }
            if((month == 9 && day >= 23) || (month == 10 && day <= 22))
            {
                if (month == 9)
                    wmonth = "September";
                else if(month == 10)
                    wmonth = "October";
                sign = "Libra";
                compatible_sign = "Gemini and Aquarius";
                element = "Air";
                if((cusp + 1 == 23) || (cusp + 2 == 23))
                   wcusp = "Scorpio";
            }if((month == 10 && day >= 23) || (month == 11 && day <= 21))
            {
                if (month == 10)
                   wmonth = "October";
                else if(month == 11)
                    wmonth = "November";
                sign = "Scorpio";
                compatible_sign = "Cancer and Pisces";
                element = "Water";
                if((cusp + 1 == 22) || (cusp + 2 == 22))
                   wcusp = "Sagittarius";
            }
            if((month == 11 && day >= 22) || (month == 12 && day <= 21))
            {
                if (month == 11)
                   wmonth = "November";
                else if(month == 12)
                    wmonth = "December";
                sign = "Sagittarius";
                compatible_sign = "Aries and Leo";
                element = "Fire";
                if((cusp + 1 == 22) || (cusp + 2 == 22))
                   wcusp = "Capricorn";
            }
            if((month == 12 && day >= 22) || (month == 1 && day <= 19))
            {
                if (month == 12)
                    wmonth = "December";
                else if(month == 1)
                    wmonth = "January";
                sign = "Capricorn";
                compatible_sign = "Taurus and Virgo";
                element = "Earth";
                if((cusp + 1 == 20) || (cusp + 2 == 20))
                   wcusp = "Aquarius";
            }
            if((month == 1 && day >= 20) || (month == 2 && day <= 18))
            {
                if (month == 1)
                    wmonth = "January";
                else if(month == 2)
                    wmonth = "February";
                sign = "Aquarius";
                compatible_sign = "Gemini and Libra";
                element = "Air";
                if((cusp + 1 == 19) || (cusp + 2 == 19))
                       wcusp = "Pisces";
            }
            if((month == 2 && day >= 19) || (month == 3 && day <= 20))
            {
                if (month == 2)
                    wmonth = "February";
                else if(month == 3)
                    wmonth = "March";
                sign = "Pisces";
                compatible_sign = "Cancer and Scorpio";
                element = "Water";
                if((cusp + 1 == 20) || (cusp + 2 == 20))
                       wcusp = "Aries";
            }
            std::cout << "\nYour Birthday is " << wmonth << " " << day << std::endl;
            std::cout << "Your Horoscope sign is " << sign << std::endl;
            if(wcusp.length() != 0)
                std::cout << "You are a " << wcusp << " cusp" << std::endl;
            std::cout << "You are compatible with the signs " << compatible_sign << std::endl;
            std::cout << "Your element is " << element << std::endl;
        }


        std::cout << "\nPress 'R' to restart the APP or any other key to exit\n";
        std::cin >> ans;
        std::cout << "\n**************************************************" << std::endl;
    }while(ans == 'R' || ans == 'r');

    return (0);
}
