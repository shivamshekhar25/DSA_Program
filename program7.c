#include <stdio.h>

int main() {
    int arr[100], n, i, j, min_index, temp;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort logic
    for(i = 0; i < n - 1; i++) {
        min_index = i;
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    // Output sorted array
    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}