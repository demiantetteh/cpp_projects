/**
 * Desc: This program reads input from the file "data.in"
 *        of employees, their salary and their pay percent increase
 *        and calculates their new salary and puts them in an aligned
 *        format.  
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


int main()
{
    std::ifstream input;
    input.open("data.in");

    double currentSalary, percentage, newSalary;
    std::string firstname, lastname;

    std::cout << std::setw(15) << std::left << "Lastname"
              << std::setw(15) << std::left << "Firstname"
              << std::setw(15) << std::right << "New Salary"
              << std::endl;
    
    //
    input >> firstname >> lastname >> currentSalary >> percentage;

    percentage = percentage / 100.0;
    newSalary = currentSalary + (currentSalary * percentage);

    std::cout << std::setw(15) << std::left << lastname
              << std::setw(15) << std::left << firstname;
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);
    std::cout << std::setw(15) << std::right << newSalary
              << std::endl;
    
    //
    input >> firstname >> lastname >> currentSalary >> percentage;

    percentage = percentage / 100.0;
    newSalary = currentSalary + (currentSalary * percentage);

    std::cout << std::setw(15) << std::left << lastname
              << std::setw(15) << std::left << firstname;
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);
    std::cout << std::setw(15) << std::right << newSalary
              << std::endl;
    

    //
    input >> firstname >> lastname >> currentSalary >> percentage;

    percentage = percentage / 100.0;
    newSalary = currentSalary + (currentSalary * percentage);

    std::cout << std::setw(15) << std::left << lastname
              << std::setw(15) << std::left << firstname;
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);
    std::cout << std::setw(15) << std::right << newSalary
              << std::endl;
    

    input.close();

    return (0);

}