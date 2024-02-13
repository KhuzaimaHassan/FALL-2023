
 #include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int a,b,c,d;
 float Xn;
 double fxn,fpxn,fdxn,lnG;
 cout<<"Enter the values of coefficients of the equation( ax^3+bx^2+cx+d): ";
 cin>>a>>b>>c>>d;
 cout<<"Your equation is "<<"= ";
 cout<<a<<"x^3+"<<b<<"x^2+"<<c<<"x+"<<d<<endl;
 cout<<"Enter some initial guess"<<"= ";
 cin>>lnG;
 Xn=lnG/2;
 fxn=(a*Xn*Xn*Xn)+(b*Xn*Xn)+(c*Xn)+d;
 fpxn=(3*a*Xn*Xn)+(2*b*Xn)+c;
 fdxn=(6*a*Xn)+(2*b);
 while(fabs((2*fxn*fpxn)/((2*pow(fpxn,2))-(fxn*fdxn)))>0.0001)
 {
     fxn=(a*Xn*Xn*Xn)+(b*Xn*Xn)+(c*Xn)+d;
     fpxn=(3*a*Xn*Xn)+(2*b*Xn)+c;
     fdxn=(6*a*Xn)+(2*b);
     Xn=Xn-(2*fxn*fpxn)/((2*pow(fpxn,2))-(fxn*fdxn));

 }
 cout<<"The root of the equation becomes "<<"= "<<Xn<<endl;
 return 0;
}


