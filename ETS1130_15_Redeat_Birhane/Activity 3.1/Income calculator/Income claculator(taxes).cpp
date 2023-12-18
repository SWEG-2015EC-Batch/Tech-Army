#include <iostream>
using namespace std;
//this is a code to calculate the netsalary with d/t tax amounts
int main()
{
    float gross_Salary, income_Tax, worked_Hour, overtimeRate, pension, overtime_Payment, tax_Rate, net_Salary;
    cout << "Enter Gross Salary" << endl;
    cin >> gross_Salary;
    cout << "Enter Worked Hour" << endl;
    cin >> worked_Hour;
    cout << "Enter Overtime Bonus Rate" << endl;
    cin >> overtimeRate;
    pension = 0.07 * gross_Salary;
    if (worked_Hour > 40)
    {
        overtime_Payment = (worked_Hour - 40) * overtimeRate;
    }
    else
    {
        overtime_Payment = 0;
    }
    if (gross_Salary < 200)
    {
        tax_Rate = 0;
    }
    else if (gross_Salary >= 200 && gross_Salary < 600)
    {
        tax_Rate = 0.1;
    }
    else if (gross_Salary >= 600 && gross_Salary < 1200)
    {
        tax_Rate = 0.15;
    }
    else if (gross_Salary >= 1200 && gross_Salary < 2000)
    {
        tax_Rate = 0.2;
    }
    else if (gross_Salary >= 2000 && gross_Salary < 3500)
    {
        tax_Rate = 0.25;
    }
    else if (gross_Salary >= 3500)
    {
        tax_Rate = 0.3;
    }
    income_Tax = gross_Salary * tax_Rate;
    net_Salary = (gross_Salary - pension - income_Tax) + overtime_Payment;
    cout << "Your Net salary is " << net_Salary;
    return 0;
}
