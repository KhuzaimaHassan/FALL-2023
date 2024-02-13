#include <iostream>
using namespace std;
int calculateFactorial() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int factorial = 1;

    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }

    return factorial;
}

    int main() {

    int result = calculateFactorial();

    cout << "The factorial of the number is: " << result << std::endl;

    return 0;
}

