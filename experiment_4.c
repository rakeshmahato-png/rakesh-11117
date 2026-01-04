#include <stdio.h>

int main() {
    int a, b;

    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);

    if (a > b) {
        printf(" A is largest number", a);
    } else if (b > a) {
        printf(" B is largest number", b);
    } else {
        printf("Both A and B are equal");
    }

    return 0;
}