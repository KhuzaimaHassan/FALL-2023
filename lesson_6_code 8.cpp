#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    while (b != 0)
    {
        int r = a%b;
        a = b;
        b = r;
    }
    cout<<"Greatest Common Factor: "<<a<<endl;
    return 0;
}
