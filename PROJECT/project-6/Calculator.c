#include<stdio.h>

void add(float a, float b){
    printf("Addition of %.2f and %.2f is %.2f\n", a, b, a + b);
}

void subtract(float a, float b){
    printf("Subtraction of %.2f and %.2f is %.2f\n", a, b, a - b);
}

void multiply(float a, float b){
    printf("Multiplication of %.2f and %.2f is %.2f\n", a, b, a * b);
}

void divide(float a, float b){
    if (b != 0) {
        printf("Division of %.2f and %.2f is %.2f\n", a, b, a / b);
    } else{
        printf("Error: Division by zero is not allowed.\n");
    }
}

void modulus(int a, int b){
    if (b != 0){
        printf("Modulus of %d and %d is %d\n", a, b, a % b);
        } 
            else {
            printf("Error: Modulus by zero is not allowed.\n");
            }
    }

int main(){
    int choice;
    float num1, num2;

    while (1){
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program.\n");
            break;
            }

        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);

        switch (choice){
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            case 5:
                modulus((int)num1, (int)num2);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
