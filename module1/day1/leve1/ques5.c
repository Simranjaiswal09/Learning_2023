#include <stdio.h>

int bit_operations(int num, int oper_type) {
    int result = num;  // Initialize the result with the given number

    switch (oper_type) {
        case 1:
            // Set the 1st bit (0-indexed) by performing a bitwise OR operation
            result = result | (1 << 0);
            break;
        case 2:
            // Clear the 31st bit (0-indexed) by performing a bitwise AND operation
            result = result & ~(1 << 31);
            break;
        case 3:
            // Toggle the 16th bit (0-indexed) by performing a bitwise XOR operation
            result = result ^ (1 << 15);
            break;
        default:
            printf("Error: Invalid operation type.\n");
            return -1;  // Return an error status
    }

    return result;
}

int main() {
    int num, oper_type;
    int result;

    // Read input from the user
    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);

    printf("Enter operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    // Perform the bit operations and get the result
    result = bit_operations(num, oper_type);

    // Print the result
    if (result != -1) {
        printf("Result: %d\n", result);
    }

    return 0;
}
