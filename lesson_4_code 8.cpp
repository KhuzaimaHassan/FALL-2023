#include<iostream>
using namespace std;
int main ()
{
    double operand1, operand2, result;
    char op;
    cout<<"Enter an expression (operand1 operator operand2): ";
    cin>> operand1 >> op >> operand2;
    switch (op)
    {
        case '*':
        result = operand1 * operand2;
        cout<<"RESULT: "<<result<<endl;
        break;
        case '/':
         result = operand1 / operand2;
        cout<<"RESULT: "<<result<<endl;
        break;
        case '+':

        result = operand1 + operand2;
        cout<<"RESULT: "<<result<<endl;
        break;
        case '-':
            result = operand1 - operand2;
        cout<<"RESULT: "<<result<<endl;
        break;
        default :
        cout<< ".......BAD EXPRESSION......"<<endl;
    }
    return 0;
}
