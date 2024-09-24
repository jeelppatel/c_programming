#include <stdio.h>

main(){
    int n, i;

    printf("Enter the array's n: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array's elements: \n");
    for (i = 0; i<n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Negative elements from an Array: ");
    int p = 0;
    for (i = 0; i < n; i++){
        if (a[i] < 0){
            if (p){
                printf(", ");
            }
            printf("%d", a[i]);
            p = 1;
        }
    }

    if (!p){
        printf("codent find negitave elemants");
    }

    printf("\n");
    
}

