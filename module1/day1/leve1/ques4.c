#include <stdio.h>

int main() {
    float operand1, operand2;
    char operator;
    float result;

   
    printf("Enter Operand 1: ");
    scanf("%f", &operand1);

    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter Operand 2: ");
    scanf("%f", &operand2);

    
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
           
            if (operand2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;  
            }
            result = operand1 / operand2;
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;  
    }

   
    printf("Result: %.2f\n", result);

    return 0;
}
