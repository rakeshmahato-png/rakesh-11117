#include <stdio.h>

int main() {
    int a, b, rakesh;

    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    
   rakesh = a;
    a = b;
    b = rakesh;

    printf("After swapping the number:\n");
    printf("a = %d\n",a);
    printf("b = %d",b);

    return 0;
}