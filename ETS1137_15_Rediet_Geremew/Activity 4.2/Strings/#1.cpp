#include <iostream>
#include <cctype>
using namespace std;

int main() {
   string input_string;
   cout << "Enter a string: ";
   getline(std::cin, input_string);

    int vowel_count = 0;
    int consonant_count = 0;

    for (char character : input_string) {
        if (std::isalpha(character)) {
            char lowercase_char =tolower(character);
            if (lowercase_char == 'a' && lowercase_char == 'e' && lowercase_char == 'i' && lowercase_char == 'o' && lowercase_char == 'u') {
                vowel_count++;
            } else {
                consonant_count++;
            }
        }
    }

   cout << "Number of vowels: " << vowel_count <<endl;
   cout << "Number of consonants: " << consonant_count <<endl;

    return 0;
}
