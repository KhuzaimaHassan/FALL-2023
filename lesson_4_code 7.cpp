#include<iostream>
using namespace std;
int main ()
{
    int marks;
    string lettergrades;
    cout<<"ENTER MARKS OBTAINED IN A EXAM: ";
    cin>>marks;
    if (marks>=90)
    {
        lettergrades = "'A'";
    }
    else if (marks >= 80)
    {
        lettergrades = "'B'";
    }
    else if (marks >= 70)
    {
        lettergrades = "'C'";
    }
    else if (marks >= 60)
    {
        lettergrades = "'D'";
    }
    else if (marks >= 50)
    {
        lettergrades = "'E'";
    }
    else
    {
        lettergrades = "'F'";
    }
    cout<<"*****THE OBTAINED MARK IS "<<marks<<"*****"<<endl<<"*****LETTER GRADE IS "<<lettergrades<<"*****"<<endl;
    return 0;
}
