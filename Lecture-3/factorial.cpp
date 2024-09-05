// A program to calculate factorial of a number.
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a, i, fact = 1;
    cout << "Enter any number to calculate its factorial: ";
    cin >> a;

    // Factorial calculation
    for (i = 1; i <= a; i++)
    {
        fact *= i;  // Multiply fact by i in each iteration
    }

    cout << "\n\tThe Factorial of " << a << " is: " << fact;
    getch();  // Wait for a key press before closing
    return 0;
}
