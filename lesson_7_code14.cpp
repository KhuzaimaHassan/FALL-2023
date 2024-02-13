#include<iostream>
 using namespace std;
  // Prototype
 int intpower(int base, int exp);
 // Calculates power for int base and exponent
 int main(void)
 {
 int a,b;
 cout<<"\nEnter two integers:";
 cin>>a>>b;
 cout<<"\n\n"<<a<<" ^ "<<b<<" = "<<intpower(a,b);
 return 0;
 }
 // Definition
 int intpower(int base,int exp)
 {
 if(base==0) // Base case 1
 {
 return 0;
 }
 if(exp==0) // Base case 2
 {
 return 1;
 }
 if(exp==1) // Base case 3
 {
 return base;
 }

 if(exp>1) // Inductive step
 {
 return base*intpower(base,exp-1);
 }
 }

