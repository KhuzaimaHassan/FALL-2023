#include <iostream>
using namespace std;
int main()
{
    int binary,decimal = 0,base = 1;
    cout<<"Decimal Equivalent of a Binary Number"<<endl;
    cout << "Enter a binary number: ";
    cin >> binary;
    while (binary > 0)
        {
        int digit = binary % 10;
        decimal += digit * base;
        binary /= 10;
        base *= 2;
    }
    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}

