#include<iostream>;
using namespace std;
int main ()
{
    int number,factorial=1;
    cout<<"Enter an integer : ";
    cin>>number;
    for(int i=number;i>=1;--i)
    {
        factorial*=i;
        if(i!=1)
        {
         cout<<i<<" x ";
        }
        else
        {
            cout<<"1";
        }

    }
    cout<<" = "<<factorial<<endl;
    return 0;
}
