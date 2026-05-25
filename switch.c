#include <stdio.h>

int main() {
    double a, b, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); 

    printf("Enter second number: ");
    scanf("%lf", &b);

    switch (op) {
        case '+':
            result = a + b;
            printf("Result: %.2f", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %.2f", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %.2f", result);
            break;
        case '/':
            result = a / b;
            printf("Result: %.2f", result);
            break;
        default:
            printf("Unknown operator.\n");
    }

    return 0;
}
