#include <stdio.h>


int is_divisible_by_3_and_5(int number) {
    return (number % 3 == 0) && (number % 5 == 0);
}


int main() {
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if (is_divisible_by_3_and_5(num)) {
        printf("The given number is divisible by both 3 & 5.\n");
    	} 
    		else {
        		printf("The given number is not divisible by both 3 & 5.\n");
    		}
    
    return 0;
    
}
