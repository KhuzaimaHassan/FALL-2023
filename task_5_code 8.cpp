#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    bool found = false;
    cout << "Enter a string: ";
    getline(cin, str);

    size_t pos = str.find("hello");
    if (pos != string::npos) {
        found = true;
    }

    if (found) {
        cout << "Found hello." << endl;
    } else {
        cout << "Did not find hello." << endl;
    }
    return 0;
}

