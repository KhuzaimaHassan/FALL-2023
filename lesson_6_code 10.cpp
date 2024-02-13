#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout<< "Enter a number: ";
    cin>>num;
    for(int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout<< "The number is not Prime" <<endl;
            return 0;
        }
    }
    cout<<"The number is Prime" <<endl;
    return 0;
}
