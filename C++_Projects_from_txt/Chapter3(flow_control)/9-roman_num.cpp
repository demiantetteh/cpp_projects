#include <iostream>

int main()
{
    int year, times, rem;
    char ans;

    do{
        std::cout << "**********************************\n"
                  << "         ROMAN NUMERALS :)        \n"
                  << "**********************************\n\n";

        std::cout << "[This Program converts the year you entered]\n";
        std::cout << "[-into Roman Numeral]\n";
        std::cout << "[Hit ENTER after entering your input]\n\n";
        std::cout << "\nPlease Enter a year between 1,000 to 3,000\n->";
        std::cin >> year;

        if(year >= 1000 && year <= 3000)
        {
            std::cout << "\nYEAR: " << year << std::endl;
            std::cout << "ROMAN NUMERAL: ";
            rem = year % 1000;
            times = year / 1000;

            //thousands
            for(int cnt = 1; cnt <= times; cnt++)
                std::cout << "M";
            
            //hundreds
            if(rem >= 100)
            {
                times = rem / 100;

                if(times == 9)
                {
                    std::cout << "CM";
                    rem -= 900;
                }
                if(times >= 5 && times <= 8)
                {
                    std::cout << "D";
                    times -= 5;
                     rem -= 500;
                }
                if(times == 4)
                {
                    std::cout << "CD";
                    rem -= 400;
                }
                if(times < 4 && times > 0)
                {
                    for(int cnt = 1; cnt <= times; cnt++)
                    {
                        std::cout << "C";
                        rem -= 100;
                    }
                }
            }
            //tens
            if(rem >= 10)
            {
                times = rem / 10;

                if(times == 9)
                {
                    std::cout << "XC";
                    rem -= 90;
                }
                if(times >=5 && times <= 8)
                {
                    std::cout << "L";
                    times -= 5;
                    rem -= 50;
                }
                if(times == 4)
                {
                    std::cout << "XL";
                    rem -= 40;
                }
                if(times < 4 && times > 0)
                {
                    for(int cnt = 1; cnt <= times; cnt++)
                    {
                        std::cout << "X";
                        rem -= 10;
                    }
                }
            }
            //ones
            if(rem >= 1)
            {
                times = rem / 1;

                if(times == 9)
                {
                    std::cout << "IX";
                }
                if(times >= 5 && times <= 8)
                {
                    std::cout << "V";
                    times -= 5;
                }
                if(times == 4)
                    std::cout << "IV";
                if(times < 4 && times > 0)
                {
                    for(int cnt = 1; cnt <= times; cnt++)
                        std::cout << "I";
                }
            }
        }
        else{
            std::cout << "PLEASE ENTER A VALID YEAR WITHIN THE RANGE\n"
                      << "RESTART THE APP\n";
        }

        std::cout << "\n\nPress 'R' to restart the app or any other key to exit\n->";
        std::cin >> ans;
        std::cout << std::endl;

    }while(ans == 'r' || ans == 'R');
}