//Driver test for function findMax

#include <iostream>

const int MAX = 100;

double findMax(const double array[], int sizeused);
/**
 * findMax - finds the highest double in an array.
 * @array: The array to be searched
 * @sizeused: The size of the used array
 * Return: The highest double
*/
void fillArray(double array[], int sizeused);
/**
 * fillArray- lets a user fill an array with their specified size.
 * @array: The array to be used
 * @sizeused: The size requested and used by the user.
 * Return: Nothing
*/

int main()
{
    double array[MAX];
    int size;

    std::cout << "Enter the number of elements you want[1-100]: " ;
    std::cin >> size;

    fillArray(array, size);

    double max = findMax(array, size);

}