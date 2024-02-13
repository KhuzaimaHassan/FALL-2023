#include <iostream>
using namespace std;
int main ()
{
    int terms;
    double angle,result = 0.0;
    cout << "Enter a value for sin evaluation: ";
    cin >> angle;
    cout << "Enter number of terms in the summation: ";
    cin >> terms;
    int sign = 1;
    double power = angle,factorial = 1.0;
    for (int n = 0; n < terms; n++)
    {
        result += sign * power / factorial;
        power *= angle * angle;
        factorial *= (2 * n + 2) * (2 * n + 3);
        sign *= -1;
    }
    cout << "Result is: " << result <<endl;
    return 0;

}
