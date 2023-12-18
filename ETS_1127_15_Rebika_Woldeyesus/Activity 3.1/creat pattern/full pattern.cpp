#include <iostream>
using namespace std;
int main() {
    int start = 10;
    int end = 49;
    int rows = 4;
    int columns = 10;

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