#include<iostream>
#include<conio.h>
using namespace std;
#define row 5
#define col 3
int main()
{

    float num[row][col];
    cout<<"Enter elements of array " ;
    cout<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"\nEnter location "<<i<<","<<j<<":";
            cin>>num[i][j];

        }
    }
    cout<<"\n\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<i<<","<<j<<"="<<num[i][j]<<" "<<"\n";


        }
    }
getch();

}
