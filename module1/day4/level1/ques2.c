#include <stdio.h>

void findSumAndAverage(int arr[], int size, int *sum, float *average) {
    *sum = 0;

    for (int i = 0; i < size; i++) {
        *sum += arr[i];
    }

    *average = (float)(*sum) / size;
}

int main() {
    int size;
    int sum = 0;
    float average = 0.0f;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size\n");
        return 0;
    }

    int arr[size];

    printf("Enter the elements of the array:\n");

    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    findSumAndAverage(arr, size, &sum, &average);

    printf("Sum of the array: %d\n", sum);
    printf("Average of the array: %.2f\n", average);

    return 0;
}
