#include <stdio.h>

int main()
{
    int x, sum = 0;
    printf("Enter a integer: ");
    scanf("%d", &x);
    for (size_t i = 1; i <= x; i++)
        sum += i;
    printf("Sum: %d", sum);    
}