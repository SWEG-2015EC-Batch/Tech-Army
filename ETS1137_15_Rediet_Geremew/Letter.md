Problem Analysis:
1.Input: Receive a letter from the user.
2.Check Case: Determine if the entered character is an alphabet and check its case (uppercase or lowercase).
3.Conversion:If the letter is in lowercase, convert it to uppercase using a function from ctype.h.If the letter is in uppercase, convert it to lowercase using another function from ctype.h.
4.Output: Display the converted letter to the user.

Algorithm:
1.Start
2.Declare a variable inputLetter as a character.
2.Input a letter from the user.
3.Check if the entered character is an alphabet using isalpha() function from ctype.h.
4.Convert the letter to uppercase using toupper() function from ctype.h if it's a lowercase letter.
5.Convert the letter to lowercase using tolower() function from ctype.h if it's an uppercase letter.
6.Display the converted letter.
7.End
