//A program to take two numbers as input and perform all 5 arithmetic operations on it.
#include<iostream>
using namespace std;
int main()
{
    //declare variables
    int a,b;
    //take input from user
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    //perform arithmetic operations and display
    cout<<"\n\tAddition: "<<(a+b)<<endl;
    cout<<"\tSubtraction:  "<<(a-b)<<endl;
    cout<<"\tMultiplication:  "<<(a*b)<<endl;
    cout<<"\tDivision:  "<<(a/b)<<endl;
    cout<<"\tModulus:  "<<(a%b)<<endl;
 return 0;
}