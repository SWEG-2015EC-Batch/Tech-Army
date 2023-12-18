Step 1: Start the program

Step 2: Declare variables: gross_Salary, income_Tax, worked_Hour, overtimeRate, pension, overtime_Payment, tax_Rate, net_Salary

Step 3: Print "Enter Gross Salary"
Step 4: Read input for gross_Salary

Step 5: Print "Enter Worked Hour"
Step 6: Read input for worked_Hour

Step 7: Print "Enter Overtime Bonus Rate"
Step 8: Read input for overtimeRate

Step 9: Calculate pension = 0.07 * gross_Salary

Step 10: If worked_Hour > 40:
             Calculate overtime_Payment = (worked_Hour - 40) * overtimeRate
         Else:
             Set overtime_Payment = 0

Step 11: If gross_Salary < 200:
             Set tax_Rate = 0
         Else if gross_Salary >= 200 and gross_Salary < 600:
             Set tax_Rate = 0.1
         Else if gross_Salary >= 600 and gross_Salary < 1200:
             Set tax_Rate = 0.15
         Else if gross_Salary >= 1200 and gross_Salary < 2000:
             Set tax_Rate = 0.2
         Else if gross_Salary >= 2000 and gross_Salary < 3500:
             Set tax_Rate = 0.25
         Else if gross_Salary >= 3500:
             Set tax_Rate = 0.3

Step 12: Calculate income_Tax = gross_Salary * tax_Rate

Step 13: Calculate net_Salary = (gross_Salary - pension - income_Tax) + overtime_Payment

Step 14: Print "Your Net salary is ", net_Salary

Step 15: End the program

 