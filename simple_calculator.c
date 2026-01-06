#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

        printf("Enter first numbers: ");
    scanf("%f",&num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second numbers: ");
    scanf("%f",&num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2f", result);
            } else {
                printf("Error: Division by zero!");
            }
            break;

        default:
            printf("Invalid operator!");
    }

    return 0;
}
