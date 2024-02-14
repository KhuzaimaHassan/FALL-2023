#include<iostream>
using namespace std;
int main ()
{
    char letter;
    cout<<"Please input a letter: ";
    cin>>letter;
    if (letter>='A'&&letter<='Z')
    {
        cout<<endl<<"***UPPERCASE LETTER***";

    }
    else
    {
        cout<<endl<<"***NOT AN UPPERCASE LETTER***";
    }
    return 0;
}
