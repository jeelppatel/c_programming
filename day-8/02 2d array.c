#include <stdio.h>

main(){
    int n, m, i, j;
    
    printf("Enter the array's row size: ");
    scanf("%d", &n);
    printf("Enter the array's column size: ");
    scanf("%d", &m);

    int A[n][m], B[n][m], C[n][m];

    printf("Enter array A's elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter array B's elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Array C is:\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

}

