
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "How many numbers you want to store? ";
    cin >> num;
    int list[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> list[i];
    }
    for (int i = num - 1; i >= 0; --i)
    {

        if (list[i] % 2 == 0)
        {
            cout << list[i] << " , ";
        }
    }
}
