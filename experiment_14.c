#include <stdio.h>

int main() {
    int a[5];
    int i;

    // Taking input
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Displaying output
    printf("You entered:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}