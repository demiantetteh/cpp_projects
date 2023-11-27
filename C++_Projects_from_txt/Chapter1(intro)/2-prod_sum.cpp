#include <iostream>

/**
 * main - Entry point
 * @num1 - variable for the first number
 * @num2 - variable for the second number
 * Description - reads in two variables and outputs their sum and product
 * Return: always 0(success)
 */

 int main()
 {
     double num1, num2;
     std::cout << "Enter two numbers: ";
     std::cin >> num1 >> num2;

     std::cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << std::endl;
     std::cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << std::endl;

     std::cout << "This is the end of the program\n";

     return (0);
 }
