#include<iostream>
using namespace std;

int main() {

    int testScore = 85;
    int assignmentScore = 75;
    int quizScore = 90;
    int projectScore = 80;
    int finalScore = 88;

    int totalScore = testScore + assignmentScore + quizScore + projectScore + finalScore;

    cout << "--------------------------------------------" << endl;
    cout << "| Test | Assign | Quiz | Project | Final | Total |" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "|  " << testScore << "   |   " << assignmentScore << "    |   " << quizScore << "  |   " << projectScore << "     |   " << finalScore << "   |   " << totalScore << "   |" << endl;
    cout << "--------------------------------------------" << endl;


    cout << "Score Level: ";
    if (totalScore >= 80) {
        cout << "Excellent" << endl;
    } else if (totalScore >= 60) {
        cout << "Very Good" << endl;
    } else if (totalScore >= 50) {
        cout << "Fair" << endl;
    } else if (totalScore >= 40) {
        cout << "Poor" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
} 