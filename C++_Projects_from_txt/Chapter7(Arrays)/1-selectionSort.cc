#include <iostream>

void fillArray(int a[], int size, int &numberUsed);
void sort(int a[], int numberUsed);
void swapValues(int &v1, int &v2);
int indexOfSmallest(const int a[], int startIndex, int numberUsed);

int main()
{
    std::cout << "This program sorts numbers from lowest to highest.\n";

    int sampleArray[10], numberUsed;
    fillArray(sampleArray, 10, numberUsed);
    sort(sampleArray, numberUsed);

    std::cout << "in sorted order the numbers are: ";
    for (int index = 0; index < numberUsed; index++)
        std::cout << sampleArray[index] << " " << std::endl;
    
    return (0);
}

void fillArray(int a[], int size, int &numberUsed)
{
    std::cout << "Enter up to " << size << " nonnegative whole numbers.\n"
             << "Mark the end of the list with a negative number. \n";
    
    int next, index = 0;

    std::cin >> next;

    while ((next >= 0) && (index < size))
    {
        a[index] = next;
        index++;
        std::cin >> next;
    }
    numberUsed = index;

    std::cout << "\n NumberUsed = " << numberUsed << " " <<  std::endl;
}

void sort (int a[], int numberUsed)
{
    int indexOfNextSmallest;

    for (int index = 0; index < (numberUsed - 1); index++) //numberUsed - 1 because one number will remain at it's place, or since we're swapping numberUsed -1 numbers at most will move.
    {
        indexOfNextSmallest = indexOfSmallest(a, index, numberUsed);
        swapValues(a[index], a[indexOfNextSmallest]);
    }
}

void swapValues(int &v1, int &v2)
{
    int temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}

int indexOfSmallest(const int a[], int startIndex, int numberUsed)
{
    int min = a[startIndex], indexOfMin = startIndex;

    for (int index = startIndex + 1; index < numberUsed; index++)
        if (a[index] < min)
        {
            min = a[index];
            indexOfMin = index;
        }
    
    return indexOfMin;
}
