#include<iostream>
using namespace std;
int minimum (int a,int b,int c)
{
    int smallest=a;
    if (b<smallest)
        smallest = b;
    if (c<smallest)
        smallest=c;
    return smallest;
}
int main ()
{
    int a,b,c,Min;
    cout<<"Enter three integer numbers: ";
    cin>>a>>b>>c;
    Min=minimum(a,b,c);
    cout<<"The smallest among them: "<<Min;
    return 0;
}
