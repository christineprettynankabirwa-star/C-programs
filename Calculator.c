#include <stdio.h>

int main() {
    // Declare variables to store numbers and the operator
    double num1, num2, result;
    char operator;

    // Display welcome message
    printf("=== Simple Calculator ===\n");
    printf("Enter an arithmetic operation:\n");

    // Get first number from user
    printf("Enter first number: ");
    scanf("%1f", &num1);  // %1f for double, & gets the address

    // Get the operator from user
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);     // Space before %c to skip whitespace

    // Get second number from user
    printf("Enter second number: ");
    scanf("%1f", &num2);

    // Use conditional logic to perform the correct operation
    if (operator == '+') {
        result = num1 + num2;
        printf("\n%.2f + %.2f = %.2f\n", num1, num2, result);
    }
    else if (operator == '-') {
        result = num1 - num2;
        printf("\n%.2f - %.2f = %.2f\n", num1, num2, result);
    }
    else if (operator == '*') {
        result = num1 * num2;
        printf("\n%.2f * %.2f = %.2f\n", num1, num2, result);
    }
    else if (operator == '/') {
        //handle division by zero 
        if (num2 == 0) {
            printf("\nError: cannot divide by zero!\n");
        }
        else {
            result = num1 / num2;
            printf("\n%.2f / %.2f = %.2f\n", num1, num2, result);
        }
    }
    else {
        // Handle invalid operator
        printf("\nError: Invalid operator. Please use =, -, *, or / \n");
    }

    return 0;
}