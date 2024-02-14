#include <iostream>
using namespace std;

int main() {
    int n, num, digit, rev = 0;
    cout << "Enter an integer: ";
    cin >> num;

    n = num;

    while (num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if (n == rev) {
        cout << "\n***PALINDROME***" << endl;
    } else {
        cout << "***\nNOT A PALINDROME***" << endl;
    }
    return 0;
}

