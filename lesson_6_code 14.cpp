#include<iostream>
 #include<cmath>
using namespace std;
 int main(void)
 {
 double x, delta_x=0.001, xmin, xmax, sum=0.0, fx1, fx2;
 int counter, counter_max;
 cout<<"Enter the value of xmin in radian:";
 cin>>xmin;
 cout<<"Enter the value of xmax in radian:";
 cin>>xmax;
 counter_max=((xmax-xmin)/delta_x)+1;
 x=xmin;
 for(counter=1;counter<=counter_max;counter++)
 {
 fx1=cos(x);// integrating sin function
 fx2=cos(x+delta_x);
 sum=sum+(0.5*(fx1+fx2));
 x=x+delta_x;
 }
 sum=sum*delta_x;
 cout<<"integral= "<<sum;
 return 0;
 }
