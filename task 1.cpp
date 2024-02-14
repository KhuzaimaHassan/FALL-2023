#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main ()
{
    float a, b, c, x1, x2, Discriminant, Realpart, Imaginarypart;
    cout<< "Enter Coefficient a: ";
    cin>>a;
    cout<< "Enter Coefficient b: ";
    cin>>b;
    cout<< "Enter Coefficient c: ";
    cin>>c;
    Discriminant = b*b - 4*a*c;
    if (Discriminant > 0) {
        x1 = (-b + sqrt(Discriminant)) / (2*a);
        x2 = (-b - sqrt(Discriminant)) / (2*a);
        cout<< "Roots are Real and Different." <<endl;
      cout<< "x1 = " << setprecision(10) << x1 <<endl;
      cout<< "x2 = " << setprecision(10) << x2 <<endl;
      }
        else if (Discriminant == 0){
            cout<< "Roots are Real and Same." <<endl;
            x1 = -b / (2*a);
            cout<< "x1 = x2 = " << setprecision(10) << x1 <<endl;
            }
        else {
            Realpart = -b / (2*a);
            Imaginarypart =sqrt(-Discriminant) / (2*a);
            cout<< "Roots are Complex and Different." <<endl;
           cout<< "x1 = "<< setprecision(10) << Realpart  << " + " << Imaginarypart << " i "<<endl;
           cout<< "x2 = "<< setprecision(10) << Realpart << " - " << Imaginarypart << " i "<<endl;}
        return 0;
}

