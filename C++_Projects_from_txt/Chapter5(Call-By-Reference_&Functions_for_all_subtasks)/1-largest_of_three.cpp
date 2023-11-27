#include <iostream>
// this is just some mini useless program;

void organize(int &large, int &mid, int &small);
/**
 * organize: Swaps values of variables to contain appropriate ones
 * large: largest value at the end of the program
 * mid: second-largest value at the end of the program
 * small: smallest value at the end of the program
 * Return: nothing.
 */

int main()
{
    int large, mid, small;

    std::cout << "********************************\n"
              << "ARRANGES INTS IN ASCENDING ORDER\n"
              << "********************************\n\n";

    std::cout << "Please Enter three integers\n";
    std::cout << "1st Int: ";
    std::cin >> large;
    std::cout << "2nd Int: ";
    std::cin >> mid;
    std::cout << "3rd Int: ";
    std::cin >> small;

    std::cout << "-------(BEFORE FUNC CALL)-------\n";
    std::cout << "Largest:\t" << large << std::endl;
    std::cout << "Second largest:\t" << mid << std::endl;
    std::cout << "Smallest:\t" << small << std::endl;

    organize(large, mid, small);

    std::cout << "-------(AFTER FUNC CALL)-------\n";
    std::cout << "Largest:\t" << large << std::endl;
    std::cout << "Second largest:\t" << mid << std::endl;
    std::cout << "Smallest:\t" << small << std::endl;

    return (0);
}
void organize(int &large, int &mid, int &small)
{
    int templ, tempm, temps;
    templ = large;
    tempm = mid;
    temps = small;

    if(templ > tempm && templ > temps)
    {
        large = templ;
        if(tempm > temps)
        {
            mid = tempm;
            small = temps;
        }
        else{
            mid = temps;
            small = tempm;
        }
    }
    else if(tempm > templ && tempm > temps)
    {
        large = tempm;
        if(templ > temps)
        {
            mid = templ;
            small = temps;
        }
        else{
            mid = temps;
            small = templ;
        }
    }
    else if(temps > templ && temps > tempm)
    {
        large = temps;
        if(templ > tempm)
        {
            mid = templ;
            small = tempm;
        }
        else{
            mid = tempm;
            small = templ;
        }
    }
}