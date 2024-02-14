#include<iostream>
using namespace std;
int main ()
{
    double table;
    cout<<"Enter the table number which you want: ";
    cin>>table;
    int count = 1;
    while(count<=10)
    {
        cout<<table<<" * "<<count<<" = "<<table*count<<endl;
        count=count+1;
    }
    return 0;
}
