#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    printf("Enter the string: ");
    fgets(a, 100, stdin);
    printf("Reverse string is: ");
    for (int i = strlen(a) - 1; i > 0 ; i--)
    {
        printf("%c", a[i - 1]);
    }
    
}