#include <iostream>
using namespace std;
int main() {
    char correctAnswers[] = {'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D', 'A', 'B'};
    char studentAnswers[10];
    int score = 0;


    for (int i = 0; i < 10; i++) {
        cout << "Enter your answer for question " << i + 1 << ": ";
        cin >> studentAnswers[i];
    }


    for (int i = 0; i < 10; i++) {
        if (studentAnswers[i] == correctAnswers[i]) {
            score++;
        }
    }


    cout << "Marked Student Answers:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Question " << i + 1 << ": " << studentAnswers[i] << "\n";
    }
    cout << "Score: " << score << "/10\n";

    return 0;
} 