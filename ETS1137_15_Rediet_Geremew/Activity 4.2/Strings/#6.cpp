#include<iostream>
#include<cctype>
using namespace std;

void findFrequency(const string& input) {
    int vowelCount = 0, consonantCount = 0, digitCount = 0, specialCharCount = 0;

    for (char ch : input) {
        if (isalpha(ch)) {
            ch = tolower(ch); 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        } else if (isdigit(ch)) {
            digitCount++;
        } else {
            specialCharCount++;
        }
    }

    cout << "Vowels: " << vowelCount << endl;
    cout << "Consonants: " << consonantCount << endl;
    cout << "Digits: " << digitCount << endl;
    cout << "Special Characters: " << specialCharCount << endl;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    findFrequency(input);

    return 0;
}
