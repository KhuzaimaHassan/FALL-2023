#include<iostream>
#include<conio.h>
using namespace std;
#define SIZE 6
int main(void)
{
// Declaring arrays
int subjectscores [SIZE];
float weeklytemperature [7];
char name[25];
// similarly long and double can be defined
// NOTE: strings are not arrays
// Initializing arrays
int monthlyprofits [12] = {1200000,6434564,5564664,5456456,5467787,9788445,4456,39996534,8745647,3142355,6574347,89676};
float subjectpercentages [6]={88.5,85.2,85.0,79.5,81.0,75.1};
char vowels[5]={'a','e','i','o','u'};
// use curly brackets containing values separated by comma
// taking input in an array from location 0 to 5 (total 6 elements)
cout<<"\nEnter element no.0 :";
cin>>subjectscores [0]; // scanning is just like any variable
cout<<"\nEnter element no.1 :"; // but using the appropriate index no.
cin>>subjectscores [1];
cout<<"\nEnter element no.2 :";
cin>>subjectscores [2];
cout<<"\nEnter element no.3 :";
cin>>subjectscores [3];
cout<<"\nEnter element no.4 :";
cin>>subjectscores [4];
cout<<"\nEnter element no.5 :";
cin>>subjectscores [5];
// Some manipulation/processing with array:
// adding 2 to each element
subjectscores[0]= subjectscores [0]+2;
subjectscores[1]=subjectscores [1]+ 2;
subjectscores[2]= subjectscores [2]+2;
subjectscores[3]= subjectscores [3]+2;
subjectscores[4]= subjectscores [4]+2;
subjectscores[5]= subjectscores [5]+2;
// printing the processed array
cout<<"\nElement 0 = "<< subjectscores [0];
cout<<"\nElement 1 = "<< subjectscores [1];
cout<<"\nElement 2 = "<< subjectscores [2];
cout<<"\nElement 3 = "<< subjectscores [3];
cout<<"\nElement 4 = "<< subjectscores [4];
cout<<"\nElement 5 = "<< subjectscores [5];
getch();
return 0;
}
