// A program to calculate simple interest using Princripal(p), Rate(R) and Time(T).
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    // declare variables.
    float p, r, t, simpIn;
    // input values from user.
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "\nEnter the rate of interest: ";
    cin >> r;
    cout << "\nEnter the time period: ";
    cin >> t;
    // calculate simple interest using formula: simpIn = (p*r*t)/100.
    simpIn = (p * r * t) / 100;
    // display the result.
    cout << "\n\tSimple Interest is: " << simpIn;
    getch();
    return 0;
};
