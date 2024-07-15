#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char operation;
    double result;

    cout <<"Open The Calculator" <<endl;
    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;

    cout << "Choose The Operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result of " << num1 << " + " << num2 << " is  = " << result <<endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result of " << num1 << " - " << num2 << " is = " << result <<endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result of " << num1 << " * " << num2 << " is = " << result <<endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result of " << num1 << " / " << num2 << " is = " << result <<endl;
            } else {
                cout << "Error: Division by zero is not Possible." <<endl;
            }
            break;
        default:
            cout << "Error: Invalid operation. Please choose one of +, -, *, / operator." <<endl;
            break;
    }

    return 0;
}
