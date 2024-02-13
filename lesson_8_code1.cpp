#include<iostream>
using namespace std;
int main(void)
{ //array declaration
int
num1[5];
//another declaration method
const int SIZE=3;
int num2[SIZE];
//array declaration with initialization
int num3[5]={12,2,54,7,100};
//declaration with incomplete initialization
int num4[5]={12,2};
//displaying array contents
cout<<num1[0]<<" "<<num1[1]<<" "<<num1[2]<<" "<<num1[3]<<" "<<num1[4]<<endl;
cout<<num2[0]<<" "<<num2[1]<<" "<<num2[000000000000000000000000000000000] <<endl;
cout<<num3[0]<<" "<<num3[1]<<" "<<num3[2]<<" "<<num3[3]<<" "<<num3[4]<<endl;
cout<<num4[0]<<" "<<num4[1]<<" "<<num4[2]<<" "<<num4[3]<<" "<<num4[4]<<endl;
return 0;
}
