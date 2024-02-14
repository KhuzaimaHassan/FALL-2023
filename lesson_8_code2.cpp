#//array declaration and initialization
#include<iostream>
using namespace std;
int main(void)
{ //array declaration
char name[5]={'H','a','r','i','s'};
//another declaration method
const int SIZE=3;
char pet[SIZE]={'1','2','3'};
//array declaration with initialization
char vowels[5]={'a','e','i','o','u'};
//declaration with incomplete initialization
char consonants[21]={'b','c'};
//displaying array contents
cout<<name[0]<<" "<<name[1]<<" "<<name[2]<<" "<<name[3]<<" "<<name[4]<<endl;
cout<<pet[0]<<" "<<pet[1]<<" "<<pet[2]<<endl;
cout<<vowels[0]<<" "<<vowels[1]<<" "<<vowels[2]<<" "<<vowels[3]<<" "<<vowels[4]<<endl;
cout<<consonants[0]<<" "<<consonants[1]<<" "<<consonants[3]<<" "<<consonants[4]<<endl;
return 0;
}
