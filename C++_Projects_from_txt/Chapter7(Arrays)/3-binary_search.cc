//this is just a binary search template

#include <iostream>

int binary_search(const int A[], int size, int item);

int main()
{

}

int binary_search(const int A[], int size, int item)
{
    int lo = 0, hi = size;

    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        if (A[mid] == item)
        {
            //found it
            return (mid);
        }
        else if (A[mid] < item)
        {
            //everything to the left of mid (including mid) is too small
            lo = mid + 1;
        }
        else
        {
            //A[mid] > item
            //everything to the right of mid (including mid) is too big
            hi = mid;
        }

    }
    return (-1);
}