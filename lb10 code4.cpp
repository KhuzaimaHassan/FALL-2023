#include <iostream>
#include <cmath>
using namespace std;

double radians(double x)
{
    double radians;
    double const pi = 3.14159265358979323849;
    radians = x * pi / 180;
    return radians;
}

double calculateSinTerm(double x, double term, double precision, int n)
{
    double numerator = -term * x * x; // Calculate the numerator of the next term: -term * x^2
    double denominator = (2 * n) * (2 * n + 1); // Calculate the denominator of the next term: (2n) * (2n + 1)
    double nextTerm = numerator / denominator; // Calculate the next term
    if (abs(nextTerm) < precision)
    {
        return nextTerm; // Base case: precision condition met, return the current term
    }
    else
    {
        return nextTerm + calculateSinTerm(x, nextTerm, precision, n + 1); // Recursive case: calculate next term and add it to the sum
    }
}

double calculateSin(double x, double precision)
{
    double term = x; // Set the initial term to the value of x
    return term + calculateSinTerm(x, term, precision, 1); // Call the helper recursive function to calculate the sum of terms
}

int main()
{
    double x;
    double precision = 0.0001;
    cout << "Enter the value of x: ";
    cin >> x;
    x = radians(x);
    double result = calculateSin(x, precision);
    cout << "sin(" << x << ") = " << result <<endl;
    return 0;
}

