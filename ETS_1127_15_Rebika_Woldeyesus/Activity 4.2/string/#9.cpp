#include <iostream>
#include <cstring>
using namespace std;
int main() {

    const int MAX_LENGTH = 50;
    char program1[MAX_LENGTH];
    char program2[MAX_LENGTH];


    cout << "Enter the name of your favorite television program: ";
    cin.getline(program1, MAX_LENGTH);

    cout << "Enter the name of another television program: ";
    cin.getline(program2, MAX_LENGTH);


    cout << "Your favorite television programs are: " << endl;
    cout << "1. " << program1 << endl;
    cout << "2. " << program2 << endl;

    return 0;
} 