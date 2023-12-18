#include <iostream>
using namespace std;

int main() {
    int start, end, rows, columns;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> columns;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            int number = start + (i * columns) + j;
            if (number <= end) {
                cout << number << " ";
            }
        }
        cout << endl;
    }

    return 0;
} 