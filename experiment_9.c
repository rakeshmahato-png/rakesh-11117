#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    printf("Enter number c: ");
    scanf("%d", &c);

    if (a >= b && a >= c)
        printf("Maximum number is a = %d", a);
    else if (b >= a && b >= c)
        printf("Maximum number is b = %d", b);
    else
        printf("Maximum number is c = %d", c);

    return 0;
}