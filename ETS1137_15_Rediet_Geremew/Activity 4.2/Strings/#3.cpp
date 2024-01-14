#include <iostream>
#include <cctype>

int main() {
    std::string input_string;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input_string);

    std::string result_string;

    for (char character : input_string) {
        if (std::isalpha(character)) {
            result_string += character;
        }
    }

    std::cout << "String after removing non-alphabet characters: " << result_string << std::endl;

    return 0;
}
