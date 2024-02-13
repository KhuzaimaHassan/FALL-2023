#include <iostream>
using namespace std;
bool isPrimeRecursive(int num, int i) {
    if (i == 1) {
        return true;
    } else {
        if (num % i == 0) {
            return false;
        } else {
            return isPrimeRecursive(num, i - 1);
        }
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = isPrimeRecursive(num, num - 1);

    if (isPrime) {
        cout << "The number is prime." <<endl;
    } else {
        cout << "The number is not prime." <<endl;
    }

    return 0;
}
