#include<iostream>
 using namespace std;
 unsigned long factorial(unsigned long val); //Prototype for factorial function
 int main ()
 {
 unsigned long num;
 cout<<endl<<"Enter a No. to find its factorial: ";
 cin>>num;

 cout<<endl<<num<<" ! is = "<<factorial(num);

 return 0;
 }
 unsigned long factorial(unsigned long val)
 {
 if(val == 1 || val == 0)
 {
 return 1;
 }
 if(val>1)
 {
 //cout<<endl<<"At Recursive call val was :"<<val;
 return val* factorial(val-1);
 }
 }
