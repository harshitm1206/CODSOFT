#include <iostream>
using namespace std;

int main() {
    double number1, number2;
    char operation;

    cout << "-------------------------------\n";
    cout << "      SIMPLE CALCULATOR       \n";
    cout << "-------------------------------\n\n";

    // Asking user to input two numbers
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    // Displaying the menu of operations
    cout << "\nSelect an operation to perform (+, -, *, /): ";
    cin >> operation;

    // Processing the chosen operation
    cout << "\nResult: ";
    switch (operation) {
        case '+':
            cout << number1 << " + " << number2 << " = " << (number1 + number2);
            break;
        case '-':
            cout << number1 << " - " << number2 << " = " << (number1 - number2);
            break;
        case '*':
            cout << number1 << " * " << number2 << " = " << (number1 * number2);
            break;
        case '/':
            if (number2 != 0)
                cout << number1 << " / " << number2 << " = " << (number1 / number2);
            else
                cout << "Error: Division by zero is not allowed.";
            break;
        default:
            cout << "Invalid operation. Please choose one of +, -, *, /.";
    }

    cout << "\n\nThank you for using the calculator!\n";
    return 0;
}
