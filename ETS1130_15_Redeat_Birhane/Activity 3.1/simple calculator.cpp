#include <iostream>
using namespace std;
/*This is a code for a simple calculator that
terminates when a user inputs 0*/
int main() {
    float num1, num2;
    char op;

    do {
        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter an operator (+, -, *, /) or 0 to exit: ";
        cin >> op;

        if (op == '0') {
            cout << "Calculator terminated." << endl;
            break;
        }

        cout << "Enter the second number: ";
        cin >> num2;

        switch (op) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operator. Please try again." << endl;
                break;
        }
    } while (true);

    return 0;
}
