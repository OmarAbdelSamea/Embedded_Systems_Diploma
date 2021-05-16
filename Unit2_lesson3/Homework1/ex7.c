#include <stdio.h>

int main()
{
    float x, y;
    printf("Enter value of a: ");
    scanf("%f", &x);
    printf("Enter value of b: ");
    scanf("%f", &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping, value of a = %f \n", x);
    printf("After swapping, value of b = %f", y);
}