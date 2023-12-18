#include <iostream>
using namespace std;
int main()
{
    int num1, num2, result;
    char operation;
    
    
    do
    {
        cout << "choose the operation(+,-,*,/) you want or 0 to exit";
        cin >> operation;
        if (operation == 0){
            cout<<"End";
            break;
        }
        cout << "Enter num1";
        cin >> num1;
        cout << "Enter num2";
        cin >> num2;

        switch (operation)
        {
        case '+':
            result = num1 + num2;
            cout << "your result is" << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "your result is " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "your result is" << result << endl;
            break;
        case '/':
            if (num2 == 0)
            {
                cout << "error";
            }
            else
            {
                result = num1 / num2;
                cout << "your result is " << result << endl;
            }
            break;
        }
        
    } while (true);
    return 0;
}

