Input 
	employee name 
	weekly working hours
	bonus rate per hour
	base salary 
Operation 
	gross salary= base salary + (weekly working hours*bonus rate per hour)
	net salary=gross salary-((pension rate*gross salary)+(tax rate*gross salary))
	bonus payment=bonus rate per hour*weekly working hours 
Output 
	gross salary
	net salary 
	bonus payment 
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
