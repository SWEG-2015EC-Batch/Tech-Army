#include <iostream>
#include <cmath>
using namespace std;
//this is a code to calculate x^(y);
int main() {
    double x, y, result;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    result = pow(x, y);
    cout << "The result of " << x << " raised to the power of " << y << " is: " << result << endl;

    return 0;
}
