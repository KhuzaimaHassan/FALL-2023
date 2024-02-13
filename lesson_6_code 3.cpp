#include<iostream>
using namespace std;
int main ()
{
    int num, running_sum = 0;
    cout<<"\nEnter a number to start running sum:";
    cin>>num;
    running_sum=running_sum+num;
    while(running_sum<=1000)
    {
        cout<<"\nRunning sum = "<<running_sum;
        cout<<"\nEnter another number: ";
        cin>>num;
        running_sum=running_sum+num;
    }
    cout<<"\nSorry. Your running sum exceeded 1000.";
    return 0;
}
