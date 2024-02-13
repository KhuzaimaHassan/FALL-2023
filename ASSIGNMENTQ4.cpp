#include<iostream>;
using namespace std;
int main ()
{
    int hoursworked;
    double hourlyrate,grosspay;
    cout<<"Enter hours worked (-1 to end): ";
    cin>>hoursworked;
    while(hoursworked!=-1)
    {
        cout<<"Enter hourly rate of the employee: ";
        cin>>hourlyrate;
        if(hoursworked<=40)
        {
            grosspay = hoursworked*hourlyrate;
        }
        else
        {
            grosspay = 40*hourlyrate+((hoursworked-40)*(hourlyrate*1.5));
        }
        cout<<"Salary is "<<grosspay<<" Rs."<<"\n\n";
        cout<<"Enter hours worked (-1 to end): ";
        cin>>hoursworked;

    }
    return 0;


}
