#include <iostream>
using namespace std;

int main()
{
    double num1;
    double num2;
    double result;
    char op;

    cout << "          CALCULATOR           " << endl;
    cout << "Select the operation to be performed (+ - * /): ";
    cin >> op;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << "Result: " << result;
        break;
    case '-':
        result = num1 - num2;
        cout << "Result: " << result;
        break;
    case '*':
        result = num1 * num2;
        cout << "Result: " << result;
        break;
    case '/':
        result = num1 / num2;
        cout << "Result: " << result;
        break;

    default:
        cout << "Invalid response!!";
        break;
    }

    return 0;
}