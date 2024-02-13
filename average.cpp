#include<iostream>
#include<conio.h>
using namespace std;
#define max 100
int main ()
{
    int index,insert_element,insert_index,pivot,maxindex=19;
    float sum,average;
    int num[max]={1,2,2,8,34,67,21,25,12,23,45,200,31,88,27,99,101,122,124,3};
    cout<<"Displaying original array"<<endl;
    for(pivot=0;pivot<=maxindex;pivot++)
    {
        cout<<"ELEMENT NUMBER "<<pivot<<":"<<num[pivot]<<endl;
    }
    for(pivot=0;pivot<=maxindex;pivot++)
    {
        sum=sum+num[pivot];
    }
    average=sum/(maxindex+1);
    cout<<"\n\nAVERAGE : "<<average<<endl;
    cout<<"Enter the element to be replaced: ";
    cin>>insert_element;
    cout<<"Enter the element number to which it is replaced : ";
    cin>>insert_index;
    for(pivot=0;pivot<=maxindex;pivot++)
    {
        if (pivot==insert_index)
        {
            num[pivot]=insert_element;
        }
        //num[index+1]=num[index];
        //cout<<"ELEMENT NUMBER "<<index<<":"<<num[index]<<endl;
    }

    //num[insert_index]=insert_element;
    //maxindex++;

    cout<<"\n\nDisplaying final  array"<<endl;
    for(pivot=0;pivot<=maxindex;pivot++)
    {
        cout<<"ELEMENT NUMBER "<<pivot<<":"<<num[pivot]<<endl;
    }
    cout<<"Press any key to continue....";
    getch();
    return 0;
}



