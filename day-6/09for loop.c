#include <stdio.h>

int main() {
    int N, a = 0, b = 1, next;

    // Prompt the user for input
    printf("Enter any number: ");
    scanf("%d", &N);

    // Check if the input is a valid positive number
    if (N <= 0) {
        printf("Enter a positive integer.\n");
        return 1;
    }

    // Print the Fibonacci series up to N numbers
    printf("Output:\n");

    // Handle special cases where N is 1 or 2 separately
    if (N >= 1) {
        printf("%d", a); // Print the first Fibonacci number
    }
    if (N >= 2) {
        printf(", %d", b); // Print the second Fibonacci number
    }

    // Print the remaining Fibonacci numbers
    for (int i = 3; i <= N; i++) {
        next = a + b; // Compute the next number in the series
        printf(", %d", next); // Print the next Fibonacci number
        a = b; // Update a to the next number
        b = next; // Update b to the next number
    }
    printf("\n");

    return 0;
}

