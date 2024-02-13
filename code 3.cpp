#include<iostream>
using namespace std;
int main()
{
    int number1 = 74, number2 = 82, number3 = 88;
    double average;
    const int numGrades = 3;
    average = (number1 + number2 + number3) / float(numGrades);
    cout<<average;
    return 0;
}

