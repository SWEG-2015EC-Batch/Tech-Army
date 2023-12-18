Step 1: Start the program

Step 2: Declare variables: mark, sum = 0, average, N (number of students), grade, grade2, choice

Step 3: Print "For how many students do you want to calculate?"
        Read input for N

Step 4: Loop for each student (i from 1 to N):
    Step 4.1: Print "Enter the assessment of student #i"
    
    Step 4.2: Loop for each assessment (j from 0 to 4):
        Print "Choose assessment:"
                     "1. Test (15%)"
                     "2. Quiz (5%)"
                     "3. Project (20%)"
                     "4. Assignment (10%)"
                     "5. Final Exam (50%)"
         Read input for choice

         If choice is 1:
            Print "Enter mark:"
             Read input for mark
            If mark is not between 0 and 15 (inclusive):
                             Print "Invalid input. Enter again."
            Calculate sum += mark

        If choice is 2:
            Print "Enter mark:"
            Read input for mark
            If mark is not between 0 and 5 (inclusive):
                             Print "Invalid input. Enter again."
            Calculate sum += mark

        If choice is 3:
             Print "Enter mark:"
             Read input for mark
            If mark is not between 0 and 20 (inclusive):
                             Print "Invalid input. Enter again."
            Calculate sum += mark

        If choice is 4:
            Print "Enter mark:"
            Read input for mark
            If mark is not between 0 and 10 (inclusive):
                             Print "Invalid input. Enter again."
            Calculate sum += mark

        If choice is 5:
            Print "Enter mark:"
            Read input for mark
            If mark is not between 0 and 50 (inclusive):
                             Print "Invalid input. Enter again."
             Calculate sum += mark
                             
     Calculate average = sum / 5

     If average >= 90:
                 Set grade = 'A+'
                 Print "Student i grade is: ", grade
             Else if average >= 80 and average < 90:
                 Set grade = 'A'
                 Print "Student i grade is: ", grade
             Else if average >= 75 and average < 80:
                 Set grade = 'B'
                 Set grade2 = '+'
                 Print "Student i grade is: ", grade, grade2
             Else if average >= 60 and average < 75:
                 Set grade = 'B'
                 Print "Student i grade is: ", grade
             Else if average >= 55 and average < 60:
                 Set grade = 'C'
                 Set grade2 = '+'
                 Print "Student i grade is: ", grade, grade2
             Else if average >= 45 and average < 55:
                 Set grade = 'C'
                 Print "Student i grade is: ", grade
             Else if average >= 30 and average < 45:
                 Set grade = 'D'
                 Print "Student i grade is: ", grade
             Else if average < 30:
                 Set grade = 'F'
                 Print "Student i grade is: ", grade

     Reset sum = 0

Step 5: End the program 