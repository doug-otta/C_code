#include <stdio.h>

int sumOfDigits(int number);

int main(void) {
    int number;
    
    printf("Enter an integer number: ");
    scanf("%d", &number);

    int sum = sumOfDigits(number);
    
    printf("Sum of the digits: %d\n", sum);
    
    return 0;
}

int sumOfDigits(int number) {
    if (number == 0) {
        return 0; // Base case: No digits left to sum, return 0
    }
    
    int lastDigit = number % 10; // Get the last digit
    int remainingNumber = number / 10; // Get the remaining digits
    
    int sum = lastDigit + sumOfDigits(remainingNumber); // Recursively compute the sum
    
    return sum;
}