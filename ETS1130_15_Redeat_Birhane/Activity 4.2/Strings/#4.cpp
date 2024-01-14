
#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::string input_line;
    std::cout << "Enter a line of text: ";
    std::getline(std::cin, input_line);

    std::istringstream tokenizer(input_line);
    std::vector<std::string> tokens;

    std::string token;
    while (tokenizer >> token) {
        tokens.push_back(token);
    }

    std::cout << "Tokens:\n";
    for (const std::string& t : tokens) {
        std::cout << t << std::endl;
    }

    return 0;
}
