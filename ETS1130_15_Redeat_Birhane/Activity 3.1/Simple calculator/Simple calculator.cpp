
#include <iostream>
using namespace std;
//This is a code for simple calculator
int main() {
    float num1, num2;
    char op;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter an operator (+, -, *, /) or 0 to exit: ";
        cin >> op;
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
                    cout << " Division by zero is not allowed." endl;
                }
                break;
            default:
                cout << "Invalid operator" << endl;
                break;
        }
   return 0;
}
