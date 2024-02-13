#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    float N,low,high,root;
    cout<<"Enter a +ve number to calculate it's square root:";
    cin>>N;
    if(N<0)
    {
        cout<<"\n Sorry, wrong input, Re run the program";
    }
    else
    {
        root=N/2.0;
        while(fabs(((root*root)-N))>0.0001)
        {
            root=root -(((root*root)-N)/(2.0*root));
        }
    }
    cout<<"\n square root of "<<N<<" = "<<root;
    return 0;
}
