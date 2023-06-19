#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    int evenSum = 0;
    int oddSum = 0;

    printf("Enter %d elements for the array:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        if (i % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    int diff = evenSum - oddSum;
    printf("Difference between even-indexed and odd-indexed elements: %d\n", diff);

    return 0;
}
