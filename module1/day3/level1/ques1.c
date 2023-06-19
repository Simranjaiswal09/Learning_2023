#include <stdio.h>

void printPattern(int n) {
    for (int i = n; i >= 1; i--) {
        // Print numbers in ascending order
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        
        // Print numbers in descending order (except for the last row)
        if (i > 1) {
            for (int j = i; j >= 1; j--) {
                printf("%d", j);
            }
        }
        
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}
