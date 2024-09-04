#include<stdio.h>

//	Q3:-Triangle Angle Finder

 main() {
    int a, b, c;

    printf("Enter the first angle: ");
    scanf("%d", &a);
    
    printf("Enter the second angle: ");
    scanf("%d", &b);

    c = 180 - (a + b);

    printf("Third angle: %d\n", c);

}
