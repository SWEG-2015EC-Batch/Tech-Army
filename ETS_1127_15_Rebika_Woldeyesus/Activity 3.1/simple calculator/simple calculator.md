problem analysis

Input: The program requires the user to input two numbers (num1 and num2) and select an operation (operation).
Output: The program displays the result of the selected operation to the user.
Operations: The calculator supports basic arithmetic operations such as addition, subtraction, multiplication, and division.
Error Handling: The program checks for division by zero and displays an error message if the user attempts to divide by zero.
Looping: The program allows the user to perform multiple calculations by asking if they want to continue after each calculation.
User Interface: The program provides a simple command-line interface for the user to input numbers and select operations.
Data Types: The program uses floating-point variables (float) to handle decimal numbers and the character data type (char) to store the operation and user choice.
Control Flow: The program uses conditional statements (switch-case) to determine the selected operation and perform the corresponding calculation. Algorithm(pseudocode)
Initialize variables num1, num2 as integers and op as a character.
Start a do-while loop with the condition true.
Display "Enter the first number: ".
Read input for num1.
Display "Enter an operator (+, -, *, /) or 0 to exit: ".
Read input for op.
If op is equal to '0', then:
Display "Calculator terminated."
Break out of the loop.
Display "Enter the second number: ".
Read input for num2.
Use a switch statement on op:
Case '+':
Display num1, "+", num2, "=", num1 + num2.
Break.
Case '-':
Display num1, "-", num2, "=", num1 - num2.
Break.
Case '*':
Display num1, "*", num2, "=", num1 * num2.
Break.
Case '/':
If num2 is not equal to 0, then:
Display num1, "/", num2, "=", num1 / num2.
Else:
Display "Error: Division by zero is not allowed."
Break.
Default:
Display "Invalid operator. Please try again."
Break.
Repeat the loop from step 3.
Return 0 to end the program. 