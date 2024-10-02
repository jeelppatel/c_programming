#include <stdio.h>

// Function to calculate the sum of array elements
int sum_of_array(int arr[], int size) {
    int sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size, i;
    
    // Input for array size
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int arr[size]; // Declare the array
    
    // Input for array elements
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    // Calculate sum using the UDF
    int total_sum = sum_of_array(arr, size);
    
    // Output the result
    printf("The sum of the array: %d\n", total_sum);
    
    return 0;
}

