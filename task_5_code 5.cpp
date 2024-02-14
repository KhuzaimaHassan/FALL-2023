#include<iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout<<"Please enter first side(int) of Triangle: ";
    cin>>a;
    cout<<"Please enter second side(int) of Triangle: ";
    cin>>b;
    cout<<"Please enter third side(int) of Triangle: ";
    cin>>c;
    if (a+b>c&&b+c>a&&c+a>b)
    {
        cout<<endl<<"***VALID TRIANGLE***";

    }
    else
    {
        cout<<endl<<"***INVALID TRIANGLE***";
    }
    return 0;
}
