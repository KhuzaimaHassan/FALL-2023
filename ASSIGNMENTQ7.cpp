#include<iostream>
using namespace std;
int main ()
{
    double a, b, c;
    cout<<"Enter length of three sides: ";
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a)
    {
        cout<<"They are sides of triangle";
    }
    else
    {
        cout<<"They are not sides of triangle";
    }
   return 0;
}

