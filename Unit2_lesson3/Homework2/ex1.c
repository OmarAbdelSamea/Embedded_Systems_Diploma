#include <stdio.h>

int main()
{
    int x;
    printf("Enter an integer you want to check: ");
    scanf("%d", &x);
    switch (x % 2)
    {
    case 0:
        printf("%d is even", x);
        break;

    case 1:
        printf("%d is odd", x);
        break;
    
    default:
        break;
    }
}