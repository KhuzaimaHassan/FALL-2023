#include<iostream>
using namespace std;
int main ()
{
    int counter, loopruns;
    int newterm = 1, prevterm = 1,sum;
    cout<<"\t\t Fibonacci Series with Golden Ratio";
    cout<<"\nHow many Fibonacci numbers do you want to see:";
    cin>>loopruns;
    cout<<"\n   The fibonacci numbers you ordered are:\nnumber:"<<prevterm;
    for(counter = 1; counter<loopruns; counter++)
    {
       //cout<<newterm<<" ";
        cout<<"\nnumber: "<<newterm;
        cout<<" Ratio of "<<newterm<<"/"<<prevterm<<"="<<((float)newterm/(float)prevterm);
//cout<<newterm<<" ";
        sum=prevterm+newterm;
        prevterm=newterm;
        newterm=sum;
    }
    return 0;
}
