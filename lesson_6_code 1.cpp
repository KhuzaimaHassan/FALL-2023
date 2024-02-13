#include<iostream>
 using namespace std;
 int main (void)
 {
 // variable definition
 int counter, n_terms;
 cout<<"Enter number of elements: ";
 cin>>n_terms;
 int newterm=0,prevterm=1,sum;

 for(counter=0;counter<n_terms;counter++)
 {
 if(counter%10==0)cout<<endl;
 cout<<newterm<<" ";
 sum=prevterm+newterm;
 prevterm=newterm;
 newterm=sum;
 }
 return 0;
 }
