#include <iostream>
using namespace std;
int main() {
    // Print upper part
    for (int i = 0; i <= 9; ++i) {
        // Print spaces
        for (int j = 0; j < i; ++j) {
            cout << "  ";
        }

        // Print increasing numbers upto 9
        for (int k = 0; k <= 9 - i; ++k) {
            cout << k << " ";
        }

        // Print decreasing numbers upto 0
        for (int k = 9 - i - 1; k >= 0; --k) {
            if (k > 0) {
                cout << k << " ";
            } else {
                cout << k;
            }
        }

        cout << endl;
    }

    // Print lower part
    for (int i = 1; i <= 9; ++i) {
        // Print spaces
        for (int j = 0; j < 9 - i; ++j) {
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
