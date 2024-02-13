#include<iostream>
using namespace std;
int main ()
{
    int first_number,second_number,GCD;
    cout<<"Enter the first number: ";
    cin>>first_number;
    cout<<"Enter the second number: ";
    cin>>second_number;
    for(int i = 1;i<=first_number&&i<=second_number;i++)
    {
        if(first_number%i == 0 && second_number%i == 0)
        {
            GCD = i;
        }

    }
    cout<<"Greatest Common Factor (GCD): "<<GCD<<endl;
    return 0;
}
