#include <stdio.h>

int main() {
    int a;

    printf("Demonstrating continue:\n");
    for (a = 1; a <= 10; a++) {
        if (a == 5)
            continue;   // skips 5
        printf("%d ", a);
    }

    printf("\n\nDemonstrating break:\n");
    for (a = 1; a <= 10; a++) {
        if (a == 5)
            break;      // stops loop when i is 5
        printf("%d ", a);
    }

    return 0;
}