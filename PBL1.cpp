#include <iostream>
#include <cmath>
using namespace std;

double halleyMethod(double a, double b, double c, double d) {
    double x = 1.0;
    double f, f1, f2;

    do {
        f = a * pow(x, 3) + b * pow(x, 2) + c * x + d;
        f1 = 3 * a * pow(x, 2) + 2 * b * x + c;
        f2 = 6 * a * x + 2 * b;
        x -= (2 * f * f1) / ((2 * pow(f1, 2)) - (f * f2));
    } while (fabs((2 * f * f1) / ((2 * pow(f1, 2)) - (f * f2))) > 0.0001);

    return x;
}

int main() {
    double a, b, c, d;
    double x;

    cout << "Enter the coefficients of the equation: ";
    cin >> a >> b >> c >> d;

    x = halleyMethod(a, b, c, d);

    cout << "THE ROOT OF THE EQUATION IS: " << x << endl;
    return 0;
}
