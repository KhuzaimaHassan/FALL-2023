#include<iostream>
 #include<cmath>
 using namespace std;

 int main()
 {
 double num1 = 2.3,num2 = 3.8,num3 = 5.5,num4 = -2.3,num5 = -3.8,num6 =
-5.5;
 cout<<"value\tround\tfloor\tceil\ttrunc\n";
 cout<<"-----\t-----\t-----\t----\t-----\n";
 cout<<num1<<"\t"<<round(num1)<<"\t"<<floor(num1)<<"\t"<<ceil(num1)<<"\t"<<trunc(num1)<<"\n";
 cout<<num2<<"\t"<<round(num2)<<"\t"<<floor(num2)<<"\t"<<ceil(num2)<<"\t"<<trunc(num2)<<"\n";
 cout<<num3<<"\t"<<round(num3)<<"\t"<<floor(num3)<<"\t"<<ceil(num3)<<"\t"<<trunc(num3)<<"\n";
 cout<<num4<<"\t"<<round(num4)<<"\t"<<floor(num4)<<"\t"<<ceil(num4)<<"\t"<<trunc(num4)<<"\n";
 cout<<num5<<"\t"<<round(num5)<<"\t"<<floor(num5)<<"\t"<<ceil(num5)<<"\t"<<trunc(num5)<<"\n";
 cout<<num6<<"\t"<<round(num6)<<"\t"<<floor(num6)<<"\t"<<ceil(num6)<<"\t"<<trunc(num6)<<"\n";

 return 0;
 }
