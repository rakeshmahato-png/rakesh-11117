
#include <stdio.h>

int main() {
    int a, b;
    char operator;

    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("Result = %d", a + b);
            break;
        case '-':
            printf("Result = %d", a - b);
            break;
        case '*':
            printf("Result = %d", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result = %d", a / b);
            else
                printf("Division by zero not allowed");
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}

