#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char pass[] = "tech army";
    char enter[100];

    cout << "Enter the password: ";
    cin >> input;

    if (strcmp(enter, pass) == 0) {
        cout << "Correct password. Access granted." << endl;
    } else {
        cout << "Incorrect password. Access denied." << endl;
    }

    return 0;
} 