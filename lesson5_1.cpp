#include<iostream>
using namespace std;
int main()
{
    int count_=1,number;
    cout<<"Enter table number want to print :";
    cin>>number;
    cout<<endl;
    while(count_<=20)
    {
        cout<<number<<" * "<<count_<<" = "<<number*count_<<endl;
        count_++;
    }
    return 0;
}
