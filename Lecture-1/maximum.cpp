// a program to check maximum number.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    // take values in input
    int a, b;
    cout << "Enter first number:\n ";
    cin >> a;
    cout << "\nEnter second number:\n ";
    cin >> b;
    // check maximum number
    if (a > b)
    {
        cout << "\nMaximum number is " << a;
    }
    else if (b > a)
    {
        cout << "\nMaximum number is " << b;
    }
    else
    {
        cout << "\n\tBoth numbers are equal";
    }
    getch();
    return 0;
}
