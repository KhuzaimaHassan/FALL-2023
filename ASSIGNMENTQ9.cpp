#include <iostream>
using namespace std;
int main ()
{
    double x,result,term;
    result = 1.0,term = 1.0;
    int numterms;
    cout<<"Enter a value whose exponential needs to be evaluated: ";
    cin>>x;
    cout<<"Enter number of terms for evaluation: ";
    cin>>numterms;
    for(int i=1; i<=numterms; i++)
    {
        term*= x/i;
        result += term;
    }
    cout<<"Result is: "<<result<<endl;
    return 0;
}
