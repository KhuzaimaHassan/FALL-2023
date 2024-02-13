#include<iostream>
using namespace std;
int main()
{
    int i, sign=-1;
    double n,sum=0;
    cout<<"Enter no of terms:  ";
    cin>>n;
    for(i=3;i<=(n*2)-1;i=i+2)
    {
        sum=sum + sign(4/i);
        sign = sign *-1;
    }
    cout<<"Result is "<<4+sum;
    return 0;
}
