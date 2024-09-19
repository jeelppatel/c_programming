#include<stdio.h>

main(){
    int n, m, i, j;
    float sum = 0.0, average;

    printf("Enter the array's row size: ");
    scanf("%d", &n);
    printf("Enter the array's column size: ");
    scanf("%d", &m);

    int array[n][m];

    printf("Enter array's elements:\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
            sum += array[i][j];
        }
    }

    average=sum/(n*m);

    printf("Average of the Array: %.2f\n", average);

}

