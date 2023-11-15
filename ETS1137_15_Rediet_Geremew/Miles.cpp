#include <iostream>
using namespace std;
/*this is a code to calculate the # of miles an
automobile can be driven without refueling*/
int main() {
    float fuelTankCapacity, milesPerGallon, milesPossible;
    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> fuelTankCapacity;
    cout << "Enter the miles per gallon of the automobile: ";
    cin >> milesPerGallon;
    milesPossible = fuelTankCapacity * milesPerGallon;
    cout << "The automobile can be driven for " << milesPossible << " miles without refueling." << endl;

    return 0;
}
