
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

using namespace std;

const int MAX_STUDENTS = 100;
const int DAYS_PER_WEEK = 7;

int main() {
    string names[MAX_STUDENTS];
    int studyHours[MAX_STUDENTS][DAYS_PER_WEEK];
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Input student data with case-insensitive name comparison
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";

        // Input validation for name (ensure it is not a number)
        while (true) {
            cin >> names[i];

            // Convert entered name to lowercase for case-insensitive comparison
            for (int k = 0; k < names[i].length(); k++) {
                names[i][k] = tolower(names[i][k]);
            }

            bool isNumber = true;
            for (int k = 0; k < names[i].length(); k++) {
                if (!isdigit(names[i][k])) {
                    isNumber = false;
                    break;
                }
            }

            if (isNumber) {
                cout << "Invalid input. Please enter a valid name: ";
                cin.clear(); // Clear the error flag
                cin.ignore(100, '\n'); // Discard incorrect input
            } else {
                break; // Exit the loop if the input is a valid name
            }
        }

        cout << "Enter the study hours for each day of the week:\n";
        for (int j = 0; j < DAYS_PER_WEEK; j++) {
            cout << "Day " << j + 1 << ": ";

            // Data validation for study hours (cannot exceed 24)
            while (true) {
                if (cin >> studyHours[i][j] && studyHours[i][j] >= 0 && studyHours[i][j] <= 24) {
                    break; // Exit the loop if the input is valid
                } else {
                    cout << "Invalid input. Please enter a valid study hours (0-24): ";
                    cin.clear(); // Clear the error flag
                    cin.ignore(100, '\n'); // Discard incorrect input
                }
            }
        }
        cout << endl;
    }

    // Display student study hours
    cout << "Student";
    for (int i = 0; i < DAYS_PER_WEEK; i++) {
        cout << "\tDay " << i + 1;
    }
    cout << "\tTotal\tAverage\n";

    for (int i = 0; i < numStudents; i++) {
        cout << names[i];

        int totalHours = 0;
        for (int j = 0; j < DAYS_PER_WEEK; j++) {
            int hours = studyHours[i][j];
            cout << "\t" << hours;
            totalHours += hours;
        }

        float averageStudent = static_cast<float>(totalHours) / DAYS_PER_WEEK;
        cout << "\t" << totalHours << "\t" << averageStudent << endl;
    }

    // Calculate and display total average study hours
    cout << "\nTotal average:\t";
    for (int day = 0; day < DAYS_PER_WEEK; day++) {
        int totalHoursPerDay = 0;
        for (int student = 0; student < numStudents; student++) {
            totalHoursPerDay += studyHours[student][day];
        }

        float averageDay = static_cast<float>(totalHoursPerDay) / numStudents;
        cout << "\t" << averageDay;
    }
    cout << endl;

    // Search for a student and display relevant information
    string searchName;
    cout << "\nEnter the name of the student to search: ";

    // Input validation for search name (ensure it is not a number)
    while (true) {
        cin >> searchName;

        // Convert entered name to lowercase for case-insensitive comparison
        for (int k = 0; k < searchName.length(); k++) {
            searchName[k] = tolower(searchName[k]);
        }

        bool isNumber = true;
        for (int k = 0; k < searchName.length(); k++) {
            if (!isdigit(searchName[k])) {
                isNumber = false;
                break;
            }
        }

if (isNumber) {
            cout << "Invalid input. Please enter a valid name: ";
            cin.clear(); // Clear the error flag
            cin.ignore(100, '\n'); // Discard incorrect input
        } else {
            break; // Exit the loop if the input is a valid name
        }
    }

    bool found = false;
    for (int i = 0; i < numStudents; i++) {
        if (names[i] == searchName) {
            found = true;
            cout << "Student found!\n";
            cout << "Name: " << names[i] << endl;

            cout << "Do you want to see total study hours or study hours for a specific day? (total/day): ";
            string choice;

            // Input validation for choice (ensure it is not a number)
            while (true) {
                cin >> choice;

                // Convert choice to lowercase for case-insensitive comparison
                for (int k = 0; k < choice.length(); k++) {
                    choice[k] = tolower(choice[k]);
                }

                bool isNumber = true;
                for (int k = 0; k < choice.length(); k++) {
                    if (!isdigit(choice[k])) {
                        isNumber = false;
                        break;
                    }
                }

                if (!isNumber) {
                    break; // Exit the loop if the input is not a number
                } else {
                    cout << "Invalid input. Please enter a valid choice: ";
                    cin.clear(); // Clear the error flag
                    cin.ignore(100, '\n'); // Discard incorrect input
                }
            }

            if (choice == "total") {
                int total = 0;
                for (int day = 0; day < DAYS_PER_WEEK; day++) {
                    total += studyHours[i][day];
                }
                cout << "Total study hours: " << total << endl;
            } else if (choice == "day") {
                int day;

                // Data validation for day input
                while (true) {
                    cout << "Enter the day (1-7): ";
                    cin >> day;

                    if (!cin.fail() && day >= 1 && day <= DAYS_PER_WEEK) {
                        break; // Exit the loop if the input is valid
                    } else {
                        cout << "Invalid day entered. Please enter a number between 1 and 7: ";
                        cin.clear(); // Clear the error flag
                        cin.ignore(100, '\n'); // Discard incorrect input
                    }
                }

                cout << "Study hours for Day " << day << ": " << studyHours[i][day - 1] << endl;
            } else {
                cout << "Invalid choice." << endl;
            }

            break;
        }
    }

    if (!found) {
        cout << "Student not found." << endl;
    }

    return 0;
}
