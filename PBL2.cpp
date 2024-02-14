#include <iostream>
#include <cmath>
using namespace std;
// Function to calculate sin(x) using the expansion formula: sin(x) = Σ (-1)^n / ((2n + 1)!) * x^(2n + 1)
double radians(double x)
{
 double radians;
double const pi = 3.14159265358979323849;
radians=x*pi/180;
  return radians;
}

double calculateSin(double x, double precision)
 {
double result = x; // Set the initial result to the value of x
double term = x; // Set the initial term to the value of x
int n = 1; // Initialize the counter
while (abs(term) >= precision)
{
  double numerator = -term * x * x; // Calculate the numerator of the next term: -term * x^2
  double denominator = (2 * n) * (2 * n + 1); // Calculate the denominator of the next term: (2n) * (2n + 1)
  term = numerator / denominator; // Calculate the next term
  result += term; // Add the next term to the result
  n++; // Increment the counter
}
return result;
}
int main()
{
double x;
double precision = 0.0001;
cout << "Enter the value of x: ";
cin >> x;
x=radians(x);
double result = calculateSin(x, precision);
cout << "sin(" << x << ") = " << result << std::endl;
return 0;
}
