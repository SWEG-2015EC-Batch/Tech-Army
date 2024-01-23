#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int numStudent;

    cout << "Enter the number of students ";
    cin >> numStudent;
    float totalMark[numStudent];
    string scoreLevel[numStudent];
    for (int i = 0; i < numStudent; i++)
    {
        cout << "Enter the total mark of student " << i + 1 << ": ";
        cin >> totalMark[i];
        if (totalMark[i] >= 80)
        {
            scoreLevel[i] = "Excellent";
        }
        else if (totalMark[i] >= 60)
        {
            scoreLevel[i] = "Very Good";
        }
        else if (totalMark[i] >= 50)
        {
            scoreLevel[i] = "Fair";
        }
        else if (totalMark[i] >= 40)
        {
            scoreLevel[i] = "Poor";
        }
        else
        {
            scoreLevel[i] = "Fail";
        }
    }

    cout << "---------------------------" << endl;
    cout << "| Total Mark | Score Level |" << endl;
    for (int i = 0; i < numStudent; i++)
    {
        cout << "---------------------------" << endl;
        cout << "| " << setw(10) << totalMark[i] << " | " << setw(11) << scoreLevel[i] << " |" << endl;
    }

    cout << "---------------------------" << endl;

    return 0;
}
