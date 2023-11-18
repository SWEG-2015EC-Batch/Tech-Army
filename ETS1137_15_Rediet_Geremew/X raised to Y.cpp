#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    int result = 1;
    for (int i = 1; i <= y; ++i) {
        result *= x;
    }

    cout << "The result of " << x << "^" << y << " is: " << result << endl;

    return 0;
}
