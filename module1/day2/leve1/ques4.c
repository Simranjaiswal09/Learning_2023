#include <stdio.h>

int countSetBits(int num) {
    int count = 0;

    while (num > 0) {
        if (num & 1) {
            count++;
        }

        num >>= 1;
    }

    return count;
}

int main() {
    int a[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(a) / sizeof(a[0]);
    int totalSetBits = 0;

    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(a[i]);
    }

    printf("Total set bits in the array: %d\n", totalSetBits);

    return 0;
}