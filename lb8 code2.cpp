#include <iostream>
#include <conio.h> // For _getch() function
using namespace std;

const int MAX_STUDENTS = 25;

void displayMenu() {
    cout << "\n---- Database Program Menu ----" << endl;
    cout << "1. Enter record" << endl;
    cout << "2. Display records" << endl;
    cout << "3. Replace record" << endl;
    cout << "ESC. Exit" << endl;
    cout << "------------------------------" << endl;
    cout << "Enter your choice: ";
}

void enterRecord(string names[], int rollNos[], double cgpa[], int index) {
    cout << "\nEnter the details for student " << index + 1 << endl;
    cout << "Name: ";
    cin.ignore();
    getline(cin, names[index]);
    cout << "Roll No.: ";
    cin >> rollNos[index];
    cout << "CGPA: ";
    cin >> cgpa[index];
    cout << "Record entered successfully!" << endl;
}

void displayRecords(const string names[], const int rollNos[], const double cgpa[], int count) {
    cout << "\n--- Student Records ---" << endl;
    for (int i = 0; i < count; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "Name: " << names[i] << endl;
        cout << "Roll No.: " << rollNos[i] << endl;
        cout << "CGPA: " << cgpa[i] << endl;
        cout << "-----------------------" << endl;
    }
}

void replaceRecord(string names[], int rollNos[], double cgpa[], int index) {
    cout << "\nEnter the new details for student " << index + 1 << endl;
    cout << "Name: ";
    cin.ignore();
    getline(cin, names[index]);
    cout << "Roll No.: ";
    cin >> rollNos[index];
    cout << "CGPA: ";
    cin >> cgpa[index];
    cout << "Record replaced successfully!" << endl;
}

int main() {
    string names[MAX_STUDENTS];
    int rollNos[MAX_STUDENTS];
    double cgpa[MAX_STUDENTS];
    int count = 0;

    char choice;
    while (true) {
        displayMenu();
        choice = _getch(); // Read a single character without displaying it

        switch (choice) {
            case '1':
                if (count < MAX_STUDENTS) {
                    enterRecord(names, rollNos, cgpa, count);
                    count++;
                } else {
                    cout << "\nDatabase is full. Cannot enter more records." << endl;
                }
                break;
            case '2':
                if (count > 0) {
                    displayRecords(names, rollNos, cgpa, count);
                } else {
                    cout << "\nNo records to display." << endl;
                }
                break;
            case '3':
                if (count > 0) {
                    int index;
                    cout << "\nEnter the index of the record to replace (1-" << count << "): ";
                    cin >> index;
                    if (index >= 1 && index <= count) {
                        replaceRecord(names, rollNos, cgpa, index - 1);
                    } else {
                        cout << "Invalid index." << endl;
                    }
                } else {
                    cout << "\nNo records to replace." << endl;
                }
                break;
            case 27: // 27 corresponds to the ASCII value of ESC key
                cout << "\nExiting program..." << endl;
                exit(0);
            default:
                cout << "\nInvalid choice. Please try again." << endl;
        }
    }

    return 0;
}

