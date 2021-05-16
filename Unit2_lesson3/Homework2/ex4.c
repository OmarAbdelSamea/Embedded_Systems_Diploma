#include <stdio.h>

int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);
    if (x > 0)
        printf("%c is an alphabet", x);
    else
        printf("%f is not an alphabet", x);
}