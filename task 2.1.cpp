#include<iostream>
 using namespace std;
 int main()
 {
 string _str1, _str2;
 _str1 = "Hello World";
 // To test size and capacity of a string

 cout<<_str1.size();
 cout<<"\n_str1.length() = "<<_str1.length();
 cout<<"\n_str1.max_size() = "<<_str1.max_size(); //finds the maximum possible string size

 cout<<"\n_str1.capacity() = "<<_str1.capacity(); //finds the memory consumed

 // To change size of the string
 //cout<<"\n"<<_str1;

 // now resizing

 _str1.resize(6); //decreasing the size to 10 characters
 cout<<"\n"<<_str1;
 _str1 = "This is a string sample"; //resetting the actual string
 _str1.resize(50, '$'); //resizing to 50 characters with additional character $
 cout<<"\n"<<_str1;


 _str1.resize(23); //resizing to the original size
 cout<<"\n"<<_str1;
 cout<<"\n_str1.empty() = "<<_str1.empty();
 cout<<"\n_str2.empty() = "<<_str2.empty();
 //Element access
 cout<<"\n"<<_str1[5]; //access 5th element of string starting

 cout<<"\n"<<_str1.at(5);//access 5th element of string starting from 0
 //Modifiers
 _str2 = "Stretched to the point of no turning back";
 cout<<"\n_str2 = "<<_str2;
 //let's modify _str2
 _str2.append(" A flight of fancy on a windswept field");
 cout<<"\n_str2 = "<<_str2;
 // learn the following functions yourself
 // ---------- push_back() ----------
 // ---------- pop_back() ----------
 // ---------- assign() ----------
 // ---------- swap() ----------
 return 0;
 }
