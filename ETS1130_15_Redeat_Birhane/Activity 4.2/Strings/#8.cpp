#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;

int main() {
    string inputText;

    cout << "Enter a line of text: ";
    getline(cin, inputText);

    
    transform(inputText.begin(), inputText.end(), inputText.begin(), ::toupper);
    cout << "Uppercase: " << inputText << endl;

    
    transform(inputText.begin(), inputText.end(), inputText.begin(), ::tolower);
    cout << "Lowercase: " << inputText << endl;

    return 0;
}
