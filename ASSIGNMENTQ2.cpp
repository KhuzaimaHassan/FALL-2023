#include<iostream>
using namespace std;
int main ()
{
    int num1,num2,num3,sum,average,product,largest,smallest;
    cout<<"Input three different integers: ";
    cin>>num1>>num2>>num3;
    sum = num1+num2+num3;
    cout<<"Sum is "<<sum<<endl;
    average = (num1+num2+num3)/3;
    cout<<"Average is "<<average<<endl;
    product = num1*num2*num3;
    cout<<"Product is "<<product<<endl;
    smallest=num1;
    if (smallest>num2)
    {
        smallest=num2;
    }
    if(smallest>num3)
    {
        smallest=num3;
    }
    cout<<"Smallest is "<<smallest<<endl;
    largest=num1;
    if (largest<num2)
    {
        largest=num2;
    }
    if(largest<num3)
    {
        largest=num3;
    }
    cout<<"Largest is "<<largest<<endl;
    if (num1%2==0)
    {
        cout<<num1<<" is even"<<endl;
    }
    else
    {
        cout<<num1<<" is odd"<<endl;
    }
    if (num2%2==0)
    {
        cout<<num2<<" is even"<<endl;
    }
    else
    {
        cout<<num2<<" is odd"<<endl;
    }
    if (num3%2==0)
    {
        cout<<num3<<" is even"<<endl;
    }
    else
    {
        cout<<num3<<" is odd"<<endl;
    }
    return 0;
}
