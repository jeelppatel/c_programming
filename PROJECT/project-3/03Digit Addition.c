#include <stdio.h>

int main() {
    int number, lastDigit, firstDigit;

    
    printf("Enter any number: ");
    scanf("%d", &number);

   
    lastDigit = number % 10;

    
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;  
    }

    
    printf("Sum of first and last digit: %d\n", firstDigit + lastDigit);
}
