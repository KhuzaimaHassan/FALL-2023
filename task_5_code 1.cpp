#include<iostream>
using namespace std;
int main ()
{
    int num1;
    cout<<"Please enter an integer: ";
    cin>>num1;
    if (num1 > 0)
    {
        cout<<"The number is Positive";
    }
    if (num1 < 0)
    {
        cout<<"The number is Negative";
    }
    if (num1 == 0)
    {
        cout<<"The number is Zero";
    }
    return 0;
}
