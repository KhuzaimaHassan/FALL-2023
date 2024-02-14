#include<iostream>
#include<cmath>
#include<iomanip>
#define max 8
using namespace std;
int main()
{
    char name[max]={'k','h','u','z','a','i','m','a'};
    int index,buffer,reverseindex,maxindex=7;
    reverseindex=maxindex;
    for(index=0;index<=(maxindex/2);index++)
    {
        //if((name[index]>=97)&&(name[index]<=122))

            buffer=name[index];
            name[index]=name[reverseindex];
            name[reverseindex]=buffer;
            reverseindex--;

    }
    for(index=0;index<max;index++)
    {
        cout<<name[index];
    }

    return 0;
}
