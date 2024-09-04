#include <stdio.h>



main() {
    float score;
    char grade;

  
    printf("Enter your score: ");
    scanf("%f", &score);

  
    grade = (score >= 90 && score <=100) ? 'A' :
            (score >= 80 && score <=90) ? 'B' :
            (score >= 70 && score <=80) ? 'C' :
            (score >= 60 && score <=70) ? 'D' :
            (score >= 50 && score <=60) ? 'E' : 'F';

   
    printf("Your grade is %c\n", grade);
    
    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done!\n");
            break;
        case 'C':
            printf("Good job!\n");
            break;
        case 'D':
            printf("You passed, but you could do better.\n");
            break;
        case 'E':
            printf("You passed, but improvement is needed.\n");
            break;
        case 'F':
            printf("Sorry, you are failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
            break;
    }

   
}
