#include <stdio.h>

#define SIZE 5

void reverseArray(int arr[], int size) {
    int temp[size];
    
    for (int i = 0; i < size; i++) {
        temp[i] = arr[size - 1 - i];
    }

    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[SIZE];

    printf("Enter %d elements for the array:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, SIZE);

    printf("Reversed array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
