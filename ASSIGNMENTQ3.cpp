#include<iostream>
using namespace std;
int main ()
{
    int number;
    cout<<"Enter a five digit integer: ";
    cin>>number;
    int digit1,digit2,digit3,digit4,digit5;
    digit1 = (number/10000)%10;
    digit2 = (number/1000)%10;
    digit3 = (number/100)%10;
    digit4 = (number/10)%10;
    digit5 = number%10;
    cout<<digit1<<"   ";
    cout<<digit2<<"   ";
    cout<<digit3<<"   ";
    cout<<digit4<<"   ";
    cout<<digit5<<"   ";
    return 0;
}
