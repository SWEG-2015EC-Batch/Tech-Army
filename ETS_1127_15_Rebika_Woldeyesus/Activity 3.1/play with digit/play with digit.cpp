 #include <iostream>
#include <cmath>
using namespace std;

// Function to reverse a number
int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

// Function to count the number of digits
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to find the sum of digits
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

// Function to find the product of even digits
int productOfEvenDigits(int num) {
    int product = 1;
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            product *= digit;
        }
        num /= 10;
    }
    return product;
}

// Function to print the first and last digit
void printFirstAndLastDigit(int num) {
    int firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    int lastDigit = num % 10;
    cout << "First Digit: " << firstDigit << endl;
    cout << "Last Digit: " << lastDigit << endl;
    cout << "Sum of First and Last Digit: " << firstDigit + lastDigit << endl;
}

// Function to check if a number is palindrome
bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = reverseNumber(num);
    return originalNum == reversedNum;
}

// Function to find the frequency of each digit
void findDigitFrequency(int num) {
    int frequency[10] = {0};
    while (num != 0) {
        int digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }
    cout << "Digit\tFrequency" << endl;
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            cout << i << "\t" << frequency[i] << endl;
        }
    }
}

// Function to check if a number is Armstrong
bool isArmstrong(int num) {
    int originalNum = num;
    int numDigits = countDigits(num);
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }
    return originalNum == sum;
}

// Function to check if a number is Strong
bool isStrong(int num) {
    int originalNum = num;
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        num /= 10;
    }
    return originalNum == sum;
}

// Function to check if a number is Perfect
bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int choice;
    do {
        cout << endl;
        cout << "Menu:" << endl;
        cout << "1. Reverse the number" << endl;
        cout << "2. Count the number of digits" << endl;
        cout << "3. Find the sum of digits" << endl;
        cout << "4. Find the product of even digits" << endl;
        cout << "5. Print the first and last digit" << endl;
        cout << "6. Check if the number is palindrome" << endl;
        cout << "7. Find the frequency of each digit" << endl;
        cout << "8. Check if the number is Armstrong" << endl;
        cout << "9. Check if the number is Strong" << endl;
        cout << "10. Check if the number is Perfect" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Reversed Number: " << reverseNumber(num) << endl;
                break;
            case 2:
                cout << "Number of Digits: " << countDigits(num) << endl;
                break;
            case 3:
                cout << "Sum of Digits: " << sumOfDigits(num) << endl;
                break;
            case 4:
                cout << "Product of Even Digits: " << productOfEvenDigits(num) << endl;
                break;
            case 5:
                printFirstAndLastDigit(num);
                break;
            case 6:
                if (isPalindrome(num)) {
                    cout << "The number is a palindrome." << endl;
                } else {
                    cout << "The number is not a palindrome." << endl;
                }
                break;
            case 7:
                findDigitFrequency(num);
                break;
            case 8:
                if (isArmstrong(num)) {
                    cout << "The number is an Armstrong number." << endl;
                } else {
                    cout << "The number is not an Armstrong number." << endl;
                }
                break;
            case 9:
                if (isStrong(num)) {
                    cout << "The number is a Strong number." << endl;
                } else {
                    cout << "The number is not a Strong number." << endl;
                }
                break;
            case 10:
                if (isPerfect(num)) {
                    cout << "The number is a Perfect number." << endl;
                } else {
                    cout << "The number is not a Perfect number." << endl;
                }
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
