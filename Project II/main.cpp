#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integer number ";
    cin>> n;
    // Print upper part
    for (int i = 0; i <= n; ++i) {
        // Print spaces
        for (int j = 0; j < i; ++j) {
            cout << "  ";
        }

        // Print increasing numbers upto 9
        for (int k = 0; k <= n - i; ++k) {
            cout << k << " ";
        }

        // Print decreasing numbers upto 0
        for (int k = n - i - 1; k >= 0; --k) {
            if (k > 0) {
                cout << k << " ";
            } else {
                cout << k;
            }
        }

        cout << endl;
    }

    // Print lower part
    for (int i = 1; i <= n; ++i) {
        // Print spaces
        for (int j = 0; j < n - i; ++j) {
            cout << "  ";
        }

        // Print increasing numbers upto 9
        for (int k = 0; k <= i; ++k) {
            cout << k << " ";
        }

        // Print decreasing numbers upto 0
        for (int k = i - 1; k >= 0; --k) {
            if (k > 0) {
                cout << k << " ";
            } else {
                cout << k;
            }
        }

        cout << endl;
    }


    return 0;
}
