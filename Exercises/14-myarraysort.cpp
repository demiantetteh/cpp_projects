#include <iostream>

int main()
{
    int arr[5] = {5, 7, 3, 6, 9};

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int x = 0; x < 5; x++)
    {
        std::cout << arr[x] << " ";
    }

}