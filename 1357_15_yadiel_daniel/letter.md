 Input 
	Any letter(uppercase or lowercase)
Operation 
	Uses cctype library functions to determine whether the input is uppercase or lowercase and converts them.
Output
	Either uppercase letter or lowercase letter depending on the input 
pseudo code
1. Start the program.
2. Declare variables: letter as a character, convert as a character, conv as a character.
3. Display a message asking the user to enter any letter.
4. Read the value for letter from the user.
5. Convert the letter to uppercase using the toupper() function and store it in the convert variable.
6. Convert the letter to lowercase using the tolower() function and store it in the conv variable.
7. Check if the letter is lowercase using the islower() function.
8. If true, display a message stating that the uppercase equivalent of the letter is convert.
9. If false, display a message stating that the lowercase equivalent of the letter is conv.
10. End the program.
