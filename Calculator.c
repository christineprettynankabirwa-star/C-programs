#include <stdio.h>

int main() {
    // Declare variables to store numbers and the operator
    double num1, num2, result;
    char operator;
    int valid_input;

    // Display welcome message
    printf("=== Simple Calculator ===\n");
    printf("Enter an arithmetic operation:\n\n");

    // Get first number from user
    printf("Enter first number: ");
    valid_input = scanf("%1f", &num1);

    //Clear the input buffer
    while (getchar() != '\n');

    // Get the operator from user
    printf("Enter operator (+, -, *, /): ");
    operator = getchar();

    // Clear the input buffer again
    while (getchar() != '\n');

    // Get second number from user
    printf("Enter second number: ");
    valid_input = scanf("%1f", &num2);

    // Clear the input buffer
    while (getchar() != '\n');
    printf("\n");

    // Use conditional logic to perform the correct operation
    if (operator == '+') {
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
    }
    else if (operator == '-') {
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
    }
    else if (operator == '*') {
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
    }
    else if (operator == '/') {
        //handle division by zero 
        if (num2 == 0) {
            printf("Error: cannot divide by zero!\n");
        }
        else {
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        }
    }
    else {
        // Handle invalid operator
        printf("Error: Invalid operator. Please use +, -, *, or / \n", operator);
    }

    return 0;
}