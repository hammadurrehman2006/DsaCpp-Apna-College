// A program to calculate simple interest using Princripal(p), Rate(R) and Time(T) in cpp.
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
    cout << "Enter the rate of interest: ";
    cin >> r;
    cout << "Enter the time period: ";
    cin >> t;
    // calculate simple interest using formula: simpIn = (p*r*t)/100.
    simpIn = (p * r * t) / 100;
    // display the result.
    cout << "Simple Interest is: " << simpIn;
    getch();
    return 0;
};
