#include <iostream>

std::string english(int num);
/**
 * english: Converts an integer to it's english name
 * @num: Integer to be converted
 * Return: (string)English form of the integer
*/

int main()
{
    std::string words;

    for(int i = 99; i > 0; i--)
    {
        words = english(i);
        std::cout << words << " bottles of beer on the wall\n"
                  << words << " bottles of beer\n"
                  << "Take one down, pass it around\n"
                  << '\n';
    }
    std::cout << "Zero bottles of beer on the wall\n";
}
std::string english(int num)
{
    std::string wtens, wones, words;
    int ones, tens;

    ones = num % 10;
    tens = num / 10; 

    switch(ones)
    {
        case 1:
            wones = "One";
            break;
        case 2:
            wones = "Two";
            break;
        case 3:
            wones = "Three";
            break;
        case 4:
            wones = "Four";
            break;
        case 5:
            wones = "Five";
            break;
        case 6:
            wones = "Six";
            break;
        case 7:
            wones = "Seven";
            break;
        case 8:
            wones = "Eight";
            break;
        case 9:
            wones = "Nine";
            break;
    }
    switch(tens)
    {
        case 2:
            wtens = "Twenty";
            break;
        case 3:
            wtens = "Thirty";
            break;
        case 4:
            wtens = "Fourty";
            break;
        case 5:
            wtens = "Fifty";
            break;
        case 6:
            wtens = "Sixty";
            break;
        case 7:
            wtens = "Seventy";
            break;
        case 8:
            wtens = "Eighty";
            break;
        case 9:
            wtens = "Ninety";
            break;
    }
    if(tens == 1)
    {
        if(ones == 1)
            words = "Eleven";
        else if(ones == 2)
            words = "Twelve";
        else if(ones == 3)
            words = "Thirteen";
        else if(ones == 4)
            words = "Fourteen";
        else if(ones == 5)
            words = "Fifteen";
        else if(ones == 6)
            words = "Sixteen";
        else if(ones == 7)
            words = "Seventeen";
        else if(ones == 8)
            words = "Eighteen";
        else if(ones == 9)
            words = "Nineteen";
        else if(ones == 0)
            words = "Ten";
    }
    else if(tens > 1)
    {
        if(ones == 0)
            words = wtens;
        else
            words = wtens + "-" + wones;
    }
    else if(tens == 0)
        return (wones);

    return (words);
}