#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j;

    // Input elements
    printf("Enter 9 elements:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Traversing and printing array
    printf("2D Array elements are:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); // new line after each row
    }

    return 0;
}