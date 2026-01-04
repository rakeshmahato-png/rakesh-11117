#include <stdio.h>

int main() {
    int a[10][10];
    int r, c, i, j;
    int sum = 0;

    // Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input elements
    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];   // adding elements
        }
    }

    // Output sum
    printf("Sum of all elements = %d", sum);

    return 0;
}