#include<iostream>
//#include<conio.h>
#include<cmath>
using namespace std;
int main (void)
{
    int num,divisor,remainder;
    cout<<"Enter a number: ";
    cin>>num;
    if((num>2) && (num%2==0) )
    {
        cout<<"\n The number is composite";
        return 0;
    }
    if ((num>3) && (num%3==0))
    {
        cout<<"\n The number is composite";
        return 0;
    }
    if (num == 2)
    {
        cout<<"\nThe number is prime";
        return 0;
    }
    for (divisor = 2; divisor<=(int)sqrt((double)num);divisor++)
    {
        remainder = num%divisor;
        if (remainder == 0)
        {
            cout<<"\n  Composite";
            break;
        }
    }
    if (remainder != 0 )
    {
        cout<<"\n Prime";
    }
    return 0;
}
