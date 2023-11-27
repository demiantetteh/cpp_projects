#include <iostream>

 /**
  *             DESCRIPTION
  *Many treadmills output the speed of the treadmill in miles per hour
  *(mph) on the console, but most runners think of speed in terms of a
  *pace. A common pace is the number of minutes and seconds per mile
  *instead of mph.
  *Write a program that starts with a quantity in mph and converts the
  *quantity into minutes and seconds per mile
  */

int main()
{
    double mi_ph, mins, secs;
    double conv1, conv2;

    std::cout << "******************************************************\n"
              << "This is an mph to mins and secs per hour calculator\n"
              << "Hit ENTER after entering input\n"
              << "******************************************************\n\n";

    std::cout << "Enter the speed of the treadmill in mph: ";
    std::cin >> mi_ph;

    //conv miles per hour to mins per mile
    conv1 = mi_ph * (1/60.0);
    mins = 1/conv1;

    //conv decimal mins to secs per mile
    conv2 = mins - (int)mins;
    secs = conv2 * 60.0;

    std::cout << "The conversion of " << mi_ph << " mi per h to mins and secs per mile is : "
              << (int)mins << " mins and " << secs << " secs per hour" << std::endl
              << "***********************************************************************\n";
    return (0);
}