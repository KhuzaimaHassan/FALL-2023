#include<iostream>
 using namespace std;
 int main()
 {
 int age;
 cout<<"Please enter your age : ";
 cin>>age;
 if(age<18)
 {
 cout<<"You can't vote."<<endl;
 if (age>=16)
 {



 cout<<"But you can drive."<<endl;
 }
 else
 {
 cout<<"You can't drive either."<<endl;
 }
 }
 else
 {
 cout<<"You can vote."<<endl;
 cout<<"You can drive."<<endl;
 if(age>=21)
 {
 cout<<"You can also participate in elections."<<endl;
 }
 else
 {
 cout<<"But you can't participate in elections."<<endl;
 }
 }
 return 0;
 }
