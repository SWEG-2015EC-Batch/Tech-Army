
#include <iostream>
#include <cctype>

int main() {
    std::string input_string;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input_string);

    int vowel_count = 0;
    int consonant_count = 0;

    for (char character : input_string) {
        if (std::isalpha(character)) {
            char lowercase_char = std::tolower(character);
            if (lowercase_char == 'a'  lowercase_char == 'e'  lowercase_char == 'i'  lowercase_char == 'o'  lowercase_char == 'u') {
                vowel_count++;
            } else {
                consonant_count++;
            }
        }
    }

    std::cout << "Number of vowels: " << vowel_count << std::endl;
    std::cout << "Number of consonants: " << consonant_count << std::endl;

    return 0;
}
