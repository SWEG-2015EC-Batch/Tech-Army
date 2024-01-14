#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int totalMark;
    string scoreLevel;
    cout << "Enter the total mark: ";
    cin >> totalMark;

    if (totalMark >= 80) {
        scoreLevel = "Excellent";
    } else if (totalMark >= 60) {
        scoreLevel = "Very Good";
    } else if (totalMark >= 50) {
        scoreLevel = "Fair";
    } else if (totalMark >= 40) {
        scoreLevel = "Poor";
    } else {
        scoreLevel = "Fail";
    }

    cout << "---------------------------" << endl;
    cout << "| Total Mark | Score Level |" << endl;
    cout << "---------------------------" << endl;
    cout << "| " << setw(10) << totalMark << " | " << setw(11) << scoreLevel << " |" << endl;
    cout << "---------------------------" << endl;

    return 0;
} 