#include <stdio.h>

int stringToInteger(const char *str) {
    int num = 0;
    int sign = 1;
    int i = 0;

    // Handle the sign if present
    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }

    // Convert each digit to an integer and build the number
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + (str[i] - '0');
        } else {
            // Invalid character encountered, return 0
            return 0;
        }
        i++;
    }

    return num * sign;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int num = stringToInteger(str);

    printf("Converted integer: %d\n", num);

    return 0;
}
