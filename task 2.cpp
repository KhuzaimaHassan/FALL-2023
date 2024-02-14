#include<iostream>
using namespace std;
int main()
{
    string _str1, _str2, _str3, _str4, _str5;
    _str1 = "Pakistan";
    _str2 = "The quick brown fox jumps over a lazy dog";
    _str3 = "0010-0100-8763-9921";
    _str4 = "Hello";
    _str5 = "World";

    // start at 3 at take all characters
    cout<<"_str1.substr(3) "<<_str1.substr(3)<<endl;

    // start at 3 and take out 5 characters
    cout<<"_str1.substr(3,5) "<<_str1.substr(3,5)<<endl;

    // string concatenation
    cout<<_str4+_str5;

    // compound assignment also work for concatenation
    // see for example
    _str4 += " ";
    _str4 +=_str5;
    cout<<endl<<_str4;

    // resetting _str4
    _str4 = "Hello";

    // finding location of a value
    cout<<endl<<_str4.find('o');

    // trying to find location of a value that does not exist
    cout<<endl<<_str4.find('f');

    //finding location of a value that exist multiple times
    cout<<endl<<_str4.find('l'); // returns first location
    cout<<endl<<"_str4.rfind('l') = ";
    cout<<_str4.rfind('l');

    // finding substring
    cout<<endl<<_str2.find("fox");

    // size of the string
    cout<<endl<<_str2.size();

    // erase function
    string _str6 = "Application and project Engineer ";
    _str6.erase(12,4); //this will erase 4 characters from location 12

    cout<<endl<<_str6;
    _str6 = "Application and project Engineer ";//resetting _str6

    _str6.replace(12,3,"for");
    cout<<endl<<_str6;

     return 0;


}
