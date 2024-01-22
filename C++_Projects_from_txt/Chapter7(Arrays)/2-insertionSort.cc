#include <iostream>

void insertionSort(int arr[], int size);
void fillArray(int a[], int size, int &numberused);

int main()
{
    std::cout << "This program sorts numbers from lowest to highest.\n";

    int sampleArray[10], numberUsed;
    fillArray(sampleArray, 10, numberUsed);
    insertionSort(sampleArray, numberUsed);

    std::cout << "in sorted order the numbers are: ";
    for (int index = 0; index < numberUsed; index++)
        std::cout << sampleArray[index] << " " << std::endl;
    
    return (0);
}

void insertionSort(int arr[], int size)
{
    int key, j;
    for(int i = 1; i < size; i++)
    {
        key = arr[i];
        j = i- 1;
        while((j >= 0) && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
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