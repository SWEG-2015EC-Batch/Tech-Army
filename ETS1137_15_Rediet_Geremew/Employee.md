Problem anlysis

1.Input: Receive the employee's name, weekly working hours, bonus rate per hour, and base salary.

2.Calculate the gross salary:Compute the gross salary as the sum of the base salary and the bonus from the hours worked.

3.Deductions:Calculate the pension deduction as 5% of the gross salary.
Compute the taxable amount (gross salary minus pension).
Calculate the tax deduction as 15% of the taxable amount.

4.Net Salary: Calculate the net salary by subtracting the sum of pension and tax deductions from the gross salary.

5.Bonus Payment: Determine the bonus payment based on the hours worked and the bonus rate per hour.

6.Output: Display the employee's name, gross salary, net salary, and bonus payment.

Algorithm:

1.Start

2.Declare variables: name (string), weeklyHours, bonusRate, baseSalary, grossSalary, pensionRate, taxRate, netSalary, bonusPayment as appropriate data types (floats or strings).

3.Input employee name, weeklyHours, bonusRate, and baseSalary.

4.Calculate the gross salary:grossSalary = baseSalary + (weeklyHours * bonusRate).

5.Calculate the pension deduction:pensionDeduction = grossSalary * 0.05 (5% pension rate).

6.Calculate the taxable amount:taxableAmount = grossSalary - pensionDeduction.

7.Calculate the tax deduction:taxDeduction = taxableAmount * 0.15 (15% tax rate).

8.Calculate the net salary:netSalary = grossSalary - (pensionDeduction + taxDeduction).

9.Calculate the bonus payment:bonusPayment = weeklyHours * bonusRate.

10.Display the employee's name, gross salary, net salary, and bonus payment.

11.End
