#include<iostream>
 using namespace std;
 int main ()
 {
 int num1 = 10, num2 = 5, num3 = -9, num4 = 5;
 bool res1, res2, res3, res4;
 res1 = (num1<num2)&&(num2>num3);
 cout<<"\t(num1<num2)&&(num2>num3)\t"<<res1;
 res2 = (num1<num2)||(num2>num3);
 cout<<"\n\t(num1<num2)||(num2>num3)\t"<<res2;
 res3 = (num1>=num3)&&(num2<=num4);
 cout<<"\n\t(num1>=num3)&&(num2<=num4)\t"<<res3;

 return 0;
}
