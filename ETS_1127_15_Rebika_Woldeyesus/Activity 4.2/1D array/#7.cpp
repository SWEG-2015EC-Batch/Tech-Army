#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers;
    int num;

    cout << "Enter a list of numbers (enter -1 to stop):" << endl;
    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        numbers.push_back(num);
    }

    cout << "Even numbers in reverse order:" << endl;
    for (int i = numbers.size() - 1; i >= 0; i--) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;
    return 0;
} 