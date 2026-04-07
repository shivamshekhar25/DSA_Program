#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j, sum = 0;

    // Input elements
    printf("Enter 9 elements:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print diagonal elements and calculate sum
    printf("Diagonal elements are:\n");
    for(i = 0; i < 3; i++) {
        printf("%d ", arr[i][i]);  // main diagonal
        sum += arr[i][i];
    }

    // Print sum
    printf("\nSum of diagonal elements = %d", sum);

    return 0;
}