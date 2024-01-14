#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double volts[] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    
    for (int i = 0; i < 9; i += 3) {
        cout << setw(8) << volts[i] << setw(8) << volts[i + 1] << setw(8) << volts[i + 2] << endl;
    }

    return 0;
}
