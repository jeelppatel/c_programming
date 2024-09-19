#include<stdio.h>

main() {
    int i, j, n = 5;  

    for (j = 1; j <= n; j++) {
        printf("* ");
    }
    printf("\n");

    printf("* ");
    for (j = 2; j < n; j++) {
        printf("  ");
    }
    printf("*\n");

    for (j = 1; j <= n; j++) {
        printf("* ");
    }
    printf("\n");

    printf("*\n");

    printf("*\n");

}
