#include <iostream>
using namespace std;
int main()
{
    int mid, final, total;
    char grade;
    char answer;
    bool continueProgram = true;

    while (continueProgram)
    {
        cout << "Enter the mid result [0-40]: ";
        cin >> mid;
        if (mid < 0  mid > 40 )
        {
            cout << "Please enter the mark in the specified range." << endl;
            
            continue;
            
        }
        cout << "Enter the final result [0-60]: ";
        cin >> final;
        if (final < 0  final > 60)
        {
            cout << "Please enter the mark in the specified range." << endl;
           continue;
        }
        total = mid + final;
        if (total >= 91)
        {
            grade = 'A';
        }
        else if (total >= 81)
        {
            grade = 'B';
        }
        else if (total >= 71)
        {
            grade = 'C';
        }
        else if (total >= 61)
        {
            grade = 'D';
        }
        else if (total >= 51)
        {
            grade = 'E';
        }
        else
        {
            grade = 'F';
        }
        if (grade != 'X')
        {
            cout << "The letter grade is: " << grade << endl;
        }
        cout << "Do you want to continue? (y/n): ";

        cin >> answer;
        if (answer == 'n')
        {
            continueProgram = false;
        }
    }
    return 0;
}