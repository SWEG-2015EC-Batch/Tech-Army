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
Pseudocode
1. Start the program.
2. Declare variables: workhr as a float, brate as a float, bsalary as a float, gsalary as a float, nsalary as a float, bpay as a float, and name as a string.
3. Display a message asking the user to enter their full name.
4. Read the value for name from the user.
5. Display a message asking the user to enter their weekly working hours.
6. Read the value for workhr from the user.
7. Display a message asking the user to enter their base salary.
8. Read the value for bsalary from the user.
9. Display a message asking the user to enter the bonus rate per hour.
10. Read the value for brate from the user.
11. Calculate gsalary by multiplying workhr by brate and adding bsalary.
12. Display the value of gsalary as the gross salary.
13. Calculate nsalary by subtracting the product of pension and gsalary, and the product of tax and gsalary from gsalary.
14. Display the value of nsalary as the net salary.
15. Calculate bpay by multiplying brate by workhr.
16. Display the value of bpay as the bonus payment.
17. End the program.

