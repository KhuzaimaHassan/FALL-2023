#include<iostream>
using namespace std;
int main ()
{
 int num, num_alias, digitcnt=0;
 cout<<"\nEnter an integer to find "<<"the number of digits in it:";
 cin>>num;
 num_alias=num;
 while (num_alias!=0)
 {
     num_alias=num_alias/10;
     digitcnt=digitcnt+1;
 }
 cout<<"\nNo of digits in "<<num<<" = "<<digitcnt;
 return 0;

}
