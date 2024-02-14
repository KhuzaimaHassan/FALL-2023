//Passing arrays to functions
#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 100
//Prototype 1:function to display a double array
void displaydoublearray (const double arr[], int start,int stop, int SIZE);
//Prototype 2:function to find and return maximum value of double array
double maxofdoublearray (const double arr[], int start,int stop);
//Prototype 3:Input double array from user
void inputdoublearray (double arr[], int start,int stop, int SIZE);
int main (void)
{
// Variable definition and declaration
double num[MAX];
double largest;
int elements;
cout<<"How many array elements do you need : ";
cin>>elements;
//input array elements from user
inputdoublearray (num,0,elements -1,MAX);
//display array
cout<<"\nThe array you entered is: n";
displaydoublearray (num,0,elements -1,MAX);
//find largest element of the given array
largest=maxofdoublearray (num,0,elements);
cout<<"\nThe largest among the given numbers"<<"is "<<largest;
return 0;
}
//***************** Definition of displaydoublearray
//Definition 1:
void displaydoublearray (const double arr[], int start,int stop,int SIZE)
{
int index;
//Displaying the array
if((SIZE>stop)&&(start>=0))
{
for(index=start;index<=stop;index++)
{
cout<<arr [index]<<" ";
if((index+1)%5==0)
{
cout<<endl;
}
}
}
else
{
cout<<"\n nERROR:Array limits exceeded.";
}
}
//*****************Definition of max of double array
//Definition 2:function to find and return maximum value of double array
double maxofdoublearray (const double arr[], int start,int stop)
{
int index;
float maximum=arr [start];//assuming the first element to be maximum
//Defensive condition: program runs only if this condition is met
//Loop to go through all elements start_index stopindex
for(index=start;index<=stop;index++)
{
if(
arr [index]>maximum)//if current assumption is wrong
{
maximum= arr [index];// select a new max
}
}
return maximum;
}
//*****************Definition of input double array
//Definition 3:Input double array from user
void inputdoublearray (double arr[], int start,int stop,int SIZE)
{
int index;
if((SIZE>stop)&&(start>=0))
{
for(index=start;index<= stop;index++)
{
cout<<"Enter location "<<index<<":";
cin>>arr [index];
}
}
else
{
cout<<"\n \nERROR:Array limits exceeded.";
}
}
