#include <stdio.h>

#define SIZE 8

int findDifference(int arr[], int size) {
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    return evenSum - oddSum;
}

int main() {
    int arr[SIZE];

    printf("Enter %d elements for the array:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int diff = findDifference(arr, SIZE);

    printf("Difference between even and odd elements: %d\n", diff);

    return 0;
}
