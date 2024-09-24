#include <stdio.h>


main() {
    int rows, cols, i, j;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }

    int r, k;

    printf("Enter row number: ");
    scanf("%d", &r);
    int rowSum = 0;
    printf("Elements of row %d: ", r);
    for (j = 0; j < cols; j++) {
        printf("%d ", arr[r][j]);
        rowSum += arr[r][j];
    }
    printf("\nThe sum of row %d: %d\n", r, rowSum);

    printf("Enter column number: ");
    scanf("%d", &k);
    int colSum = 0;
    printf("Elements of column %d: ", k);
    for (i = 0; i < rows; i++) {
        printf("%d ", arr[i][k]);
        colSum += arr[i][k];
    }
    printf("\nThe sum of column %d: %d\n", k, colSum);

}

