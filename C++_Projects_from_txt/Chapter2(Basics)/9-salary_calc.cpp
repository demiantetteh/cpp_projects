#include <iostream>

int main()
{
    double pay_rate, hours;
    double opay_rate, ohours;
    double gross_pay, take_home;
    int dependants;
    char ans;
    std::cout << "*************************************\n"
              << "SALARY/week CALCULATOR               \n"
              << "*************************************\n\n"
              << "[Hit ENTER after entering your input]\n\n";

    do{
        std::cout << "How many hours are you expected to work for per week?\n->";
        std::cin >> hours;
        std::cout << "How many hours did you work for this week?\n->";
        std::cin >> ohours;
        std::cout << "What is the pay rate per hour?\n->";
        std::cin >> pay_rate;

        if(ohours > hours)
        {
            std::cout << "What is the pay rate for overtime hours?\n->";
            std::cin >> opay_rate;

            gross_pay = (hours * pay_rate) + ((ohours - hours) * opay_rate);
            std::cout << "Your gross-pay per week is $" << gross_pay << std::endl;
            std::cout << '\n';
        }
        else if(hours == ohours)
        {
            gross_pay = ohours * pay_rate;
            std::cout << "Your gross-pay per week is $" << gross_pay << std::endl;
            std::cout << '\n';
        }
        else{
            gross_pay = ohours * pay_rate;
            std::cout << "Your gross-pay per week is $" << gross_pay << std::endl;
            std::cout << '\n';
        }

        std::cout << "PAYMENT OF TAXES AND DUES\n"
                  << "1.Social Security tax is 6% of gross pay\n"
                  << "2.Federal Income tax is 14% of gross pay\n"
                  << "3.State income tax is 5% of gross pay\n"
                  << "4.Union Dues of $10\n\n";

        std::cout << "How many dependants do you have?\n->";
        std::cin >> dependants;

        if(dependants >= 3)
        {
            std::cout << "\nYou'll need to pay an additional $35 to cover extra cost of health insurance beyond what employer pays\n";
            take_home = gross_pay - (0.006 * gross_pay) - (0.14 * gross_pay) - (0.005 * gross_pay) - 10 - 35;
            std::cout << "\nYour net take home salary for the week is $" << take_home << std::endl;
        }
        else if(dependants < 3 || dependants > 0)
        {
            take_home = gross_pay - (0.006 * gross_pay) - (0.14 * gross_pay) - (0.005 * gross_pay) - 10;
            std::cout << "\nYour net take home salary for the week is $" << take_home << std::endl;
        }
        else{
            std::cout << "PLEASE RESTART THE PROGRAM AND ENTER A POSITIVE NUMBER!!!";
        }

        std::cout << "Do you wish to restart/exit the app\n"
                  << " 'R' to RESTART\n"
                  << " 'E' or any other key to EXIT\n->";
        std::cin >> ans;
        std::cout << '\n';
    }while(ans == 'r' || ans == 'R');

    std::cout << "Thank you for using our services <3" << std::endl;

    return (0);
}
