 #include <iostream>

using namespace std;

int main() {
    int rows = 7; // number of rows in the pattern
    int cols = 8; // number of columns in the pattern

    // loop through each row
    for (int i = 1; i <= rows; i++) {
        // loop through each column
        for (int j = 1; j <= cols; j++) {
            // check if we're on the first or last row or column
            if (i == 1  i == rows  j == 1 || j == cols) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}