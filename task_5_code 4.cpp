#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout<<"****Check whether the number divisible by 3 or not****"<<endl;
    cout<<"Please enter an integer value: ";
    cin>>num;
    if (num%3==0)
    {
        cout<<"***DIVISIBLE BY 3***";
    }
    else
    {
        cout<<"***NOT DIVISIBLE BY 3***";
    }
    return 0;
}
