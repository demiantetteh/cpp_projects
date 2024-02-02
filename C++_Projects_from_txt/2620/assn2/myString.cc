#include "myString.h"
#include <cassert> //for the assert calls

myString::myString() : len{0}, arr{new char[1]}
{
    arr[0] = '\0';
}

myString::myString(const char *string) : len{0}
{
    assert(string != nullptr); // Ensuring the string is not a nullptr,
                               // may prove redundant in some cases

    while (string[len] != '\0')
        ++len;

    arr = new char[len + 1];
    for (int i = 0; i < len; ++i)
        arr[i] = string[i];

    arr[len] = '\0';
}

myString::myString(char ch) : len{1}, arr{new char[2]}
{
    arr[0] = ch;
    arr[1] = '\0';
}

myString::myString(const myString &otherArr) : len{otherArr.len}, arr{new char[len + 1]}
{
    for (int i = 0; i <= len; ++i)
        arr[i] = otherArr.arr[i];
}

myString::~myString() // destructor
{
    delete[] arr;
}

// member functions
int myString::length() const
{
    return (len);
}

char &myString::at(int i)
{
    assert(i >= 0 && i < len); // Makig sure index is valid(within bounds)
    return (arr[i]);
}

const char &myString::at(int i) const
{
    return (arr[i]);
}

myString myString::substr(int k, int n) const
{
    myString sub;
    sub.len = n;
    sub.arr = new char[n + 1];

    for (int i = 0; i < n; ++i)
        sub.arr[i] = arr[k + i]; // had a bug here it was arr[k + 1], but is now corrected

    sub.arr[n] = '\0';
    return sub;
}

myString &myString::erase(int k, int n)
{

    assert(k >= 0 && k < len); // Making sure k is valid
    assert(n >= 0);            // making sure n is non-negative
    assert(k + n <= len); //Ensure erase range doesn't exceed the string length

    if (n == 0 || k >= len)
    {
        return (*this);
    }

    // Adjust n if erasing more characters than available from k
    if (k + n > len)
    {
        n = len - k;
    }

    for (int i = k; i < (len - n); ++i)
        arr[i] = arr[i + n];

    len = len - n;
    arr[len] = '\0';

    return (*this);
}

myString &myString::insert(int k, const myString &s)
{
    assert(k >= 0 && k <= len); // Ensuring insertion position is valid
    char *newArr = new char[len + s.len + 1];

    // for loops copy the chars before insertion point, from string s, and remaining chars respectively
    for (int i = 0; i < k; ++i)
        newArr[i] = arr[i];

    for (int i = 0; i < s.len; ++i)
        newArr[k + i] = s.arr[i];

    int count = 0;
    for (int i = k; i < len; ++i)
    {
        
        newArr[s.len + k + count] = arr[i];
        count++;
    }
    
    newArr[len + s.len] = '\0'; //Null terminating the new string.

    delete[] arr;
    arr = newArr;
    len = len + s.len;

    return (*this);
}

int myString::find(const myString &s) const
{
    for (int i = 0; i <= (len - s.len); ++i)
    {
        bool found = true;
        for (int j = 0; j < s.len; ++j)
        {
            if (arr[i + j] != s.arr[j])
            {
                found = false;
                break;
            }
        }
        if (found)
        {
            return (i);
        }
    }
    return (-1);
}

myString &myString::operator=(const myString &other)
{
    if (this != &other) //self assignment is bad !
    {
        delete [] arr; //free the old memory

        len = other.len;
        arr = new char[len + 1];

        for (int i = 0; i <= len; ++i)
        {
            arr[i] = other.arr[i];
        }
    }
    return (*this);
}



// Friend
std::istream &getline(std::istream &is, myString &s)
{
    char read;
    myString tempString;

    while (is.get(read) && read != '\n')
    {
        tempString.insert(tempString.length(), myString(read));
    }
    
    s = tempString;

    return (is);
}