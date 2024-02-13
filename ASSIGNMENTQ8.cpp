#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    double a, b, c;
    cout<<"Enter length of three sides: ";
    cin>>a>>b>>c;
    a = pow(a,2),b = pow(b,2),c = pow(c,2);
    a = round(a*10000)/10000.0;
    b = round(b*10000)/10000.0;
    c = round(c*10000)/10000.0;
    if (a+b>c&&b+c>a&&c+a>b)
    {
       cout<<"The sides represents right triangle.";
    }
    else
    {
        cout<<"The sides don't represents right triangle.";
    }
    return 0;
}

