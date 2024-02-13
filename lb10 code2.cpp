#include <iostream>
using namespace std;
int gcdRecursive(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcdRecursive(b, a % b);
    }
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int gcd = gcdRecursive(num1, num2);

    cout << "GCD: " << gcd <<endl;

    return 0;
}

