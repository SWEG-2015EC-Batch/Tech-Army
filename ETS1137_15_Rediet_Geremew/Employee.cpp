#include <iostream>
#include <string>
using namespace std;
//this a code to obtain an employee's detail;
int main() {
    string name;
    float weeklyHours, bonusRate, baseSalary, grossSalary, pensionRate, taxRate, pensionDeduction, taxDeduction, netSalary, bonusPayment;
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter weekly working hours: ";
    cin >> weeklyHours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonusRate;
    cout << "Enter base salary: ";
    cin >> baseSalary;
    grossSalary = baseSalary + (weeklyHours * bonusRate);
    pensionDeduction = grossSalary * 0.05;
    float taxableAmount = grossSalary - pensionDeduction;
    taxDeduction = taxableAmount * 0.15;
     netSalary = grossSalary - (pensionDeduction + taxDeduction);
     bonusPayment = weeklyHours * bonusRate;cout << "\nEmployee Name: " << name << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Net Salary: $" << netSalary << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;

    return 0;
}
