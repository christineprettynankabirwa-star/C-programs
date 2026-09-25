#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare variables to store numbers and the operator
    double num1, num2, result;
    char operator;
    char input[100];

    // Display welcome message
    printf("=== Simple Calculator ===\n\n");

    // Get first number from user
    printf("Enter first number: ");
    fgets(input, sizeof(input), stdin);
    num1 = atof(input); // Convert input string to double

    // Get the operator from user
    printf("Enter operator (+, -, *, /): ");
    fgets(input, sizeof(input), stdin);
    operator = input[0]; //Get first character

    // Get second number from user
    printf("Enter second number: ");
    fgets(input, sizeof(input), stdin);
    num2 = atof(input); // Convert string to double

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
        printf("Error: Invalid operator '%c'. Please use +, -, *, or / \n", operator);
    }

    return 0;
}