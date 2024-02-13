#include<iostream>
using namespace std;
#define max 100
int main ()
{
    int index,buffer,pivot,maxindex=19;
    int num[max]={1,2,2,8,34,67,21,25,12,23,45,200,31,88,27,99,101,122,124,3};
    cout<<"Displaying original array"<<endl;
    for(pivot=0;pivot<=maxindex;pivot++)
    {
        cout<<"ELEMENT NUMBER "<<pivot<<":"<<num[pivot]<<endl;
    }
    for(pivot=0;pivot<maxindex;pivot++)
       {
        for(index=pivot+1;index<=maxindex;index++)
    {if(num[index]<num[pivot])
    {
       buffer=num[index];
       num[index]=num[pivot];
       num[pivot]=buffer;
    }
    }
    }
    cout<<"Displaying original array"<<endl;
    for(pivot=0;pivot<=maxindex;pivot++)
    {
        cout<<"ELEMENT NUMBER "<<pivot<<":"<<num[pivot]<<endl;
    }
    return 0;
}

