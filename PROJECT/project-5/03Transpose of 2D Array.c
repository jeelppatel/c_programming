#include <stdio.h>

main(){
    int rows, columns, i, j;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &columns);

    int array[rows][columns];
    int transpose[columns][rows];  

    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++){
    for (j = 0; j < columns; j++){
    printf("a[%d][%d] = ", i, j);
    scanf("%d", &array[i][j]);
        }
    }

    for (i = 0; i < rows; i++){
    for (j = 0; j < columns; j++){
    transpose[j][i] = array[i][j];
        }
    }

    printf("The transpose of the matrix is:\n");
    for (i = 0; i < columns; i++){
    for (j = 0; j < rows; j++){
    printf("%d ", transpose[i][j]);
        }
        printf("\n");
    
    }
}
