#include<iostream>
using namespace std;
int main ()
{
    int num_terms;
    cout<<"Enter the desired number of terms for precision: ";
    cin>>num_terms;
    double pi=0.0;
    int sign=1;
    for(int i=0;i<num_terms;i++)
    {
        double term=4.0/(2*i+1);
        pi+=sign*term;
        sign*=-1;
    }
    cout<<" Approximate value of pi using "<<num_terms<<" is "<<pi<<endl;
    return 0;
}
