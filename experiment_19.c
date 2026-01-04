#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50], s3[50];
    int len, result;

    
    printf("Enter first string: ");
    gets(s1);

    printf("Enter second string: ");
    gets(s2);


    len = strlen(s1);
    printf("Length of first string = %d\n", len);

    
    strcpy(s3, s1);
    printf("Copied string = %s\n", s3);


    strcat(s1, s2);
    printf("After concatenation = %s\n", s1);

    
    result = strcmp(s1, s2);
    if(result == 0)
        printf("Both strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}