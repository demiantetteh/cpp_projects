
/**
 * Author: Wizzy Nomotsu(001250937)
 * 
 * Prog Desc: This program computes the median of a set of numbers
 *            entered by the user
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

//function prototypes

void sort(int *A, int n);
/**
 * sort: rearranges the elements of the array in ascending order
 * @A: the array to be sorted
 * @n: the size of the array
 * return: Returns nothing
*/

void swap(int &v1, int &v2);
/**
 * swap: switches the positions of v1 with v2
 * @v1: this takes the data in v2 after the function has been called
 * @v2: this takes the data in v1 after the function has been called
 * return: Returns nothing
*/

double median(int *A, int n);
/**
 * median: computes the median of the array A of size n
 * @A: the array to be used
 * @n: the size of the array
 * returns: The median of type doubles
*/

int index_of_smallest(const int A[], int start_index, int size);
/**
 * index_of_smallest: determines the smallest element in array A of size size
 * @start_index: the starting index to be used
 * @size: the size of the array
 * return: the index of the smallest emelent in ana array
*/

const int MAX_SIZE = 100;

int main()
{
    int data[MAX_SIZE], user_size;
    double mid;

    std::cout << "Enter the size of the list [1-100] (< 1 to quit): ";
    std::cin >> user_size;

    if (user_size < 1)
    {
        std::cout << "Terminating the program\n";
        exit(1);
    }

    int count = 1; //to be used for the for loop
    for (int i = 0; i < user_size; i++)
    {
        std::cout << "Enter element " << count << " : ";
        std::cin >> data[i];
        count ++;
    }

    sort(data, user_size);
    mid = median(data, user_size);

    std::cout << "\nThe median is " << mid << " .\n" ;

    return (0);
}

void swap(int &v1, int &v2)
{
    int temp = v1;
    v1 = v2;
    v2 = temp;
}

int index_of_smallest(const int A[], int start_index, int size)
{
    int min = A[start_index];
    int index_of_min = start_index;

    for (int index = start_index + 1; index < size; index++)
    {
        if (A[index] < min)
        {
            min = A[index];
            index_of_min = index;
        }
    }

    return index_of_min;
}

void sort(int *A, int n)
{
    int index_of_next_smallest;

    for (int index = 0; index < (n - 1); index++)
    {
        index_of_next_smallest = index_of_smallest(A, index, n);
        swap(A[index], A[index_of_next_smallest]);
    }
}

double median(int *A, int n)
{
    double x;
    int avg;

    if (n % 2 == 0)
    {
        avg = n / 2;

        x = (A[avg - 1] + A[avg]) / 2.0;
    }
    else
    {
        double dec = floor(n / 2.0);
        avg = static_cast<int>(dec);

        x = A[avg];
    }

    return (x);
}