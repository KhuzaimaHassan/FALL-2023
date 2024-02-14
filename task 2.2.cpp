#include <iostream>
#include <vector>
ms-vscode.cpptools
using namespace std;

int main() {
    vector<int> numbers;

    // push_back() function adds elements to the back of the vector
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    cout << "Original vector: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // pop_back() function removes the last element from the vector
    numbers.pop_back();

    cout << "Vector after pop_back(): ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // assign() function replaces the elements in the vector
    numbers.assign({6, 7, 8});

    cout << "Vector after assign(): ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // swap() function swaps the elements of two vectors
    vector<int> otherNumbers = {9, 10};

    cout << "Before swap(): " << endl;
    cout << "numbers vector: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "otherNumbers vector: ";
    for (int i = 0; i < otherNumbers.size(); i++) {
        cout << otherNumbers[i] << " ";
    }
    cout << endl;

    numbers.swap(otherNumbers);

    cout << "After swap(): " << endl;
    cout << "numbers vector: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "otherNumbers vector: ";
    for (int i = 0; i < otherNumbers.size(); i++) {
        cout << otherNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}
