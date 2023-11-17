 Input 
	Any letter(uppercase or lowercase)
Operation 
	Uses cctype library functions to determine whether the input is uppercase or lowercase and converts them.
Output
	Either uppercase letter or lowercase letter depending on the input 
Algorithm:
1.Start
2.Declare a variable inputLetter as a character.
2.Input a letter from the user.
3.Check if the entered character is an alphabet using isalpha() function from ctype.h.
4.Convert the letter to uppercase using toupper() function from ctype.h if it's a lowercase letter.
5.Convert the letter to lowercase using tolower() function from ctype.h if it's an uppercase letter.
6.Display the converted letter.
7.End
