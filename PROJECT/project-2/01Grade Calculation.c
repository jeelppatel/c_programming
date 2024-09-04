#include <stdio.h>



main() {
    int score;
    char grade;

  
    printf("Enter your score: ");
    scanf("%d", &score);

  
    grade = (score >= 90 && score <=100) ? 'A' :
            (score >= 80 && score <=90) ? 'B' :
            (score >= 70 && score <=80) ? 'C' :
            (score >= 60 && score <=70) ? 'D' :
            (score >= 50 && score <=60) ? 'E' : 'F';

   
    printf("Your grade is %c\n", grade);

}
