//A program to check whether a person is eligible for a driving license or not.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:...";
    cin>>age;
    if(age>=18){
        cout<<"\n\tCongrats! You are eligible for Your Driving License. \n Happy Driving.";
    }
    else{
        cout<<"\tSorry you are ineligible for your Driving License.";
    }
    getch();
 return 0;
}