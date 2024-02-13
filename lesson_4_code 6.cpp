#include <iostream>

using namespace std;

int main()
{
  int marks;
  string grades;
  cout<<"enter marks :";
  cin>>marks;
  if (marks >= 90)
  {
      grades = "'A+'" ;
  }
  else if(marks >= 80)
  {
      grades = "'A'";
  }
  else if(marks >= 70)
  {
      grades = "'B'";
  }
  cout<<"\n THE LETTERGRADE FOR "<<marks<<" is : "<<grades<<endl;
}
