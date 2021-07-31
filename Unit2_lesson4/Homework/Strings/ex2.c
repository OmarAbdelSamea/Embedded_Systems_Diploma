#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    printf("Enter a string: ");
    fgets(a, 100, stdin);
    printf("length of string: %ld", strlen(a) - 1);
}