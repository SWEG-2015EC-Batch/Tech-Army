#include <iostream>
using namespace std;

int main()
{

    int first[3][3];
    int second[3][3];
    int result[3][3];
    cout << "First list" << endl;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << "enter number " << i + 1 << "." << j + 1;
            cin >> first[i][j];
        }
    }
    cout << "Second list" << endl;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << "enter number " << i + 1 << "." << j + 1;
            cin >> second[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = first[i][j] + second[i][j];
        }
    }

    cout << "Result:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
