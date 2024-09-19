#include<stdio.h>

main(){
    int size, sum;
    printf("Enter the array's row & column size: ");
    scanf("%d", &size);

    int A[size][size];
    int i, j;

    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++){
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < size; i++){
        sum += A[i][i];
    }

    printf("The sum of diagonal elements of an Array: %d\n", sum);

}

