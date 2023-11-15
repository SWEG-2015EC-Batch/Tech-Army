int main() {
    char inputLetter;

/*this is a code that changes an e tered letter
to its uppercase or lowercase*/
    cout << "Enter a letter: ";
    cin >> inputLetter;
    if (isalpha(inputLetter)) {
    if (islower(inputLetter)) {
    cout << "Uppercase equivalent: " << static_cast<char>(toupper(inputLetter)) << endl;
        }
   
     else if (isupper(inputLetter)) {
      cout << "Lowercase equivalent: " << static_cast<char>(tolower(inputLetter)) << endl;
        }
    }
   
    else {
        cout << "Please enter a valid letter." << endl;
    }

    return 0;
}
