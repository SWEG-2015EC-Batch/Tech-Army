pseudocode: start Step 1: Define a function reverseNumber that takes a number 'num' as input: start reverseNumber Set reversedNum to 0 While num is not equal to 0: Extract the last digit of num and assign it to the variable 'digit' Multiply reversedNum by 10 and add digit to it Divide num by 10 to remove the last digit end reverseNumber Return reversedNum

Step 2: Define a function countDigits that takes a number 'num' as input: start countDigits Set count to 0 While num is not equal to 0: Divide num by 10 to remove the last digit Increment count by 1 end countDigits Return count

Step 3: Define a function sumOfDigits that takes a number 'num' as input: start sumOfDigits Set sum to 0 While num is not equal to 0: Extract the last digit of num and assign it to the variable 'digit' Add digit to sum Divide num by 10 to remove the last digit end sumOfDigits Return sum

Step 4: Define a function productOfEvenDigits that takes a number 'num' as input: start productOfEvenDigits Set product to 1 While num is not equal to 0: Extract the last digit of num and assign it to the variable 'digit' If digit is even: Multiply product by digit Divide num by 10 to remove the last digit end productOfEvenDigits Return product

Step 5: start main Read input from the user and assign it to the variable 'num'

Call the reverseNumber function with num as the argument and assign the result to reversedNum Call the countDigits function with num as the argument and assign the result to count Call the sumOfDigits function with num as the argument and assign the result to sum Call the productOfEvenDigits function with num as the argument and assign the result to product

Print "Reversed Number:", followed by the value of reversedNum Print "Number of Digits:", followed by the value of count Print "Sum of Digits:", followed by the value of sum Print "Product of Even Digits:", followed by the value of product end main
