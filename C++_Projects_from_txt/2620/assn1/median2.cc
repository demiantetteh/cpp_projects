#include <iostream>
#include <cmath>
#include <cstdlib>

void insertionSort(int *arr, int size);
void swap(int &var1, int &var2);
double median(int *arr, int size);
int *resize(int *A, int n);


//Driver Code
int main()
{
   int count = 0, num;
   double mid;
   int *arr = nullptr;

   std::cout << "\nEnter a positive integer (< 1 to quit): ";
   std::cin >> num;

   while(num > 0)
   {
    arr = resize(arr, count);
    arr[count] = num;
    insertionSort(arr, count + 1);
    mid = median(arr, count + 1);

    std::cout << "The median so far is " << mid << ".\n";

    std::cout << "Enter a positive integer (< 1 to quit): ";
    std::cin >> num;

    count++;
   }

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

void swap(int &var1, int &var2)
{
    int temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
}

double median(int *arr, int size)
{
    double x;
    int avg;

    if (size % 2 == 0)
    {
        avg = size / 2;

        x = (arr[avg - 1] + arr[avg]) / 2.0;
    }
    else
    {
        double dec = floor(size / 2.0);
        avg = static_cast<int>(dec);

        x = arr[avg];
    }

    return (x);
}
int *resize(int *A, int n)
{
    int *tempArray = A;

    A = new int[n + 1];

    for (int i = 0; i < n; i++)
    {
        A[i] = tempArray[i];
    }

    delete[] tempArray; 

    return A;
}