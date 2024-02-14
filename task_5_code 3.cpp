#include<iostream>
using namespace std;
int main ()
{
    char alphabet;
    cout<<"Please input an Alphabet: ";
    cin>>alphabet;
    if (alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u'||alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O'||alphabet=='U')
    {
        cout<<"***ALPHABET IS A VOWEL***";
    }
    else
    {
        cout<<"***ALPHABET IS A CONSONANT***";
    }
    return 0;
}
