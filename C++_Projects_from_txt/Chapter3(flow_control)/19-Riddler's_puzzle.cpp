#include <iostream>

int main()
{
    int address;
    bool found = false;

    do
    {
        /**
         * . Holy digits Batman! The Riddler is planning his next caper somewhere
         * on Pennsylvania Avenue. In his usual sporting fashion, he has left the
         * address in the form of a puzzle. The address on Pennsylvania is a four digit number where:
         * ■■ All four digits are different
         * ■■ The digit in the thousands place is three times the digit in the tens place
         * ■■ The number is odd
         * ■■ The sum of the digits is 27
         */

        
        //imbedded for loops try every single combination
        for(int th = 1; th < 10; th++)//thousands
        {
            for(int hun = 1; hun < 10; hun++)//hundreds
            {
                for(int ten = 1; ten < 10; ten++)//tens
                {
                    for(int one = 1; one < 10; one++)//ones
                    {
                        //Ensuring different numbers
                        if((th != hun && th != ten && th != one) && (hun != th && hun != ten && hun != one) && (one != th && one != hun && one != ten))
                        {
                            std::cout << "Cracking Puzzle " << th << hun << ten << one << std::endl;
                            if(ten == (3 * th))// the tens digit is 3x the thousand
                            {
                                address = (th * 1000) + (hun * 100) + (ten * 10) + one;
                                if(address % 2 != 0)//address is an odd number
                                {
                                    int sum = th + hun + ten + one;
                                    if(sum == 27)
                                    {
                                        found = true;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    while(found == false);
    std::cout << "\n******************************************\n"
              << "BATMAN THE PUZZLE HAS BEEN CRACKED\n"
              << "The ADDRESS is: " << address << std::endl
              << "Hurry over to the location before it's late\n"
              << "*******************************************\n";

    return (0);
}