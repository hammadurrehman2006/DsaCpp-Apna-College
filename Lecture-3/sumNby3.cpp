// A program to take sum of number till N which are divisible by 3.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    // declare variables.
    int n, sum = 0;
    // input values
    cout << "Enter the number till which you want to find the sum of numbers divisible by 3";
    cin >> n;
    // loop to find the sum of numbers divisible by 3
    for (int i = 1; i <= n; i++)
    {
        // check if the number is divisible by 3 or not.
        if (i % 3 == 0)
        {
            // if the number is divisible by 3 then add it to the sum.
            sum = sum + i;
        }
    }
    // print the sum of numbers divisible by 3
    cout << "\tSum of numbers divisible by 3 till " << n << " is " << sum;
    getch();
    return 0;
}