#include<iostream>
using namespace std;
int main ()
{
    int num1,num2;
    cout<<"Please enter the first integer: ";
    cin>>num1;
    cout<<"Please enter the second integer: ";
    cin>>num2;
    if (num1>num2)
    {
        cout<<endl<<"*****FIRST NUMBER IS GREATER*****";
    }
    else
    {
        cout<<endl<<"*****SECOND NUMBER IS GREATER*****";
    }
    return 0;
}
