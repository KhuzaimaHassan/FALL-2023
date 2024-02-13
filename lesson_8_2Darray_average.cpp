#include<iostream>
#include<conio.h>
using namespace std;
#define rows 5
#define cols 5
int main()
{
    int total = 0;
    double average = 0.0;
    float grade[rows][cols];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<"\nEnter location "<<i<<","<<j<<":";
            cin>>grade[i][j];

        }
    }
    for (int r=0;r<rows;++r)
    {
        cout<<"Student "<<r+1<<":";
        for(int c=0;c<cols;++c)
        {
            cout<<grade[r][c]<<" ";
            total+=grade[r][c];
        }
        average=total/cols;
        cout<<"\nAverage: "<<average<<"\n\n";
        total=0;
        average=0.0;
    }
    cout<<endl;
    for(int c=0;c<cols;c++)
    {
        cout<<"Test"<<c+1<<":";
        for (int r=0;r<rows;r++)
        {
            cout<<grade[r][c]<<" ";
            total+=grade[r][c];
        }
       average=total/cols;
        cout<<"\nAverage: "<<average<<"\n\n";
        total=0;
        average=0.0;
    }
    getche();
    return 0;
}
