#include <iostream>
using namespace std;
int main()
{
    int num, reverse = 0, temp, count = 0, sum= 0;
    cout << "Enter number ";
    cin >> num;
    while (num > 0)
    {
        temp = num % 10;
        sum += num % 10;
        reverse = (reverse * 10) + temp;
        num = num / 10;
        count++;
    }
    cout <<"The reverse of the given number is " << reverse <<endl;
    cout<< "The number of digits in the given number is " <<count <<endl;
    cout<< "The sum of the digits is " <<sum <<endl;
    return 0;
}
