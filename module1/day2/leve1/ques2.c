#include <stdio.h>

void swap(void *ptr1, void *ptr2, size_t size) {
    char *charPtr1 = (char *)ptr1;
    char *charPtr2 = (char *)ptr2;
    char temp;

    for (size_t i = 0; i < size; i++) {
        temp = charPtr1[i];
        charPtr1[i] = charPtr2[i];
        charPtr2[i] = temp;
    }
}

int main() {
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b, sizeof(int));
    printf("After swapping: a = %d, b = %d\n", a, b);

    double x = 2.5, y = 3.7;
    printf("Before swapping: x = %lf, y = %lf\n", x, y);

    swap(&x, &y, sizeof(double));
    printf("After swapping: x = %lf, y = %lf\n", x, y);

    char c1 = 'A', c2 = 'B';
    printf("Before swapping: c1 = %c, c2 = %c\n", c1, c2);

    swap(&c1, &c2, sizeof(char));
    printf("After swapping: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}
