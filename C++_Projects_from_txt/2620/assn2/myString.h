#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <fstream>

class myString
{
public: 
    myString();
    myString(const char *string);
    myString(char ch);
    myString(const myString &otherArr);
    ~myString();

    int length() const;
    char &at(int i);
    const char &at(int i) const;
    int find(const myString &s) const;
    myString substr(int k, int n) const;
    myString &erase(int k, int n);
    myString &insert(int k, const myString &s);

    //assignment operator
    myString &operator=(const myString &other);

    
    friend std::istream &getline(std::istream &is, myString &s);

private:
    int len;
    char *arr;
    
};

#endif