#include<stdio.h>

int main() {
    int arr[5] = {2,4,6,8,10};
    int key, mid, low=0, high=4;
    int i;

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i=0; low<=high; i++) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element found at index %d", mid);
            break;
        }
        else if(key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if(low > high) {
        printf("Element not found");
    }

    return 0;
}