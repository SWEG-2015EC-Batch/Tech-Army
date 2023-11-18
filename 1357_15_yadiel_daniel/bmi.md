#1. Input
	Height in either feet or meter
	Weight in either kilograms or pounds
Operation 
	Feet and pound= weight*0.4535/height^2*0.3048^2
	Meter and kilogram=weight/height^2
	Feet and kilogram=weight/height^2*0.3048^2
Output 
	Body Mass Index
pseudo code
1. Start the program.
2. Declare variables: num1, num2, bmi as floats; weight, height as strings.
3. Display a message asking the user to enter their height in either feet or meter.
4. Read the value for num1 from the user.
5. Display a message asking the user to specify whether they entered their height in feet or meter.
6. Read the value for height from the user.
7. Display a message asking the user to enter their weight in either pound or kilogram.
8. Read the value for num2 from the user.
9. Display a message asking the user to specify whether they entered their weight in kilograms or pounds.
10. Read the value for weight from the user.
11. Check if height is equal to "feet" and weight is equal to "pounds".
12. If true, calculate bmi using the formula: (num2 * 0.4535) / ((num1 * 0.3048) * (num1 * 0.3048)).
13. Display the calculated BMI.
14. Check if height is equal to "meter" and weight is equal to "kilogram".
15. If true, calculate bmi using the formula: num2 / (num1 * num1).
16. Display the calculated BMI.
17. Check if height is equal to "feet" and weight is equal to "kilogram".
18. If true, calculate bmi using the formula: num2 / ((num1 * 0.3048) * (num1 * 0.3048)).
19. Display the calculated BMI.
20. If none of the above conditions are true, display an error message stating that the input for height or weight units is invalid.
21. End the program.
