#include <iostream>
using namespace std;

int main() {
    double grossSalary, workedHours, incomeTaxRate, pension, netSalary, overtimeBonusRate = 0.0, overtimePayment = 0.0;

    // Input gross salary, worked hours, and income tax rate
    cout << "Enter gross salary: ";
    cin >> grossSalary;

    cout << "Enter worked hours: ";
    cin >> workedHours;

    cout << "Enter income tax rate: ";
    cin >> incomeTaxRate;

    // Calculate pension deduction (7% of gross salary)
    pension = 0.07 * grossSalary;

    // Check if worked hours exceed 40 hours
    if (workedHours > 40) {
        double extraHours = workedHours - 40;

        // Prompt the user to enter an overtime bonus rate
        cout << "Enter overtime bonus rate per hour: ";
        cin >> overtimeBonusRate;

        // Calculate overtime payment
        overtimePayment = extraHours * overtimeBonusRate;
    }

    // Calculate net salary after deductions
    netSalary = (grossSalary - pension - (grossSalary * incomeTaxRate)) + overtimePayment;

    // Display net salary
    cout << "Net salary: " << netSalary << endl;

    return 0;
}
