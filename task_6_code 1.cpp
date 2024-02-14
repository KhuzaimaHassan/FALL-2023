#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    while (true) {
        cout << "Enter operator (+, -, *, /, or %): ";
        cin >> op;
        if (op == 27) { // ASCII code for escape button
            break;
        }
        cout << "Enter two operands: ";
        cin >> num1 >> num2;

        switch(op) {
            case '+':
                result = num1 + num2;
                cout << num1 << " + " << num2 << " = " << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;
            case '/':
                if (num2 == 0) {
                    cout << "Error: Cannot divide by zero" << endl;
                } else {
                    result = num1 / num2;
                    cout << num1 << " / " << num2 << " = " << result << endl;
                }
                break;
            case '%':
                result = static_cast<int>(num1) % static_cast<int>(num2);
                cout << static_cast<int>(num1) << " % " << static_cast<int>(num2) << " = " << result << endl;
                break;
            default:
                cout << "Invalid operator" << endl;
                break;
        }
    }

    return 0;
}

