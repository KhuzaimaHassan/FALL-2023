#include <iostream>
using namespace std;

int main()
{
    unsigned  short int n = 1000;//short int cannot used bcz it has 16 bits which is not enough for this program so it will show garbage value
    cout << "n = " << n << endl;

    n *= 10;
    cout << "n = " << n << endl;

    n *= 10;
    cout << "n = " << n << endl;

    n *= 10;
    cout << "n = " << n << endl;

    return 0;
}
