#include <iostream>

void organize(int &a, int &b, int & c);

int main()
{
    int a, b, c;

    std::cout << "Enter 3 numbers\n";
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    organize(a, b, c);

    std::cout << c << b << a << std::endl;

    return (0);
}

void organize(int &a, int &b, int & c)
{
    int templ = a, tempm = b, temps = c;

    if(a > b && a > c)
    {
        a = templ;

        if(b > c)
        {
            b = tempm;
            c = temps;
        }
        else{
            c = tempm;
            b = temps;
        }
    }
    else if(b > a && b > c)
    {
        b = templ;

        if(a > c)
        {
            a = tempm;
            c = temps;
        }
        else{
            c = tempm;
            a = temps;
        }
    }
    else if(c > b && c > a)
    {
        c = templ;

        if(b > a)
        {
            b = tempm;
            a = temps;
        }
        else{
            a = tempm;
            b = temps;
        }
    }
}