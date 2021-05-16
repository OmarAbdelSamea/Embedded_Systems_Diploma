#include <stdio.h>

int main()
{
    float x, y, temp;
    printf("Enter value of a: ");
    scanf("%f", &x);
    printf("Enter value of b: ");
    scanf("%f", &y);
    temp = x;
    x = y;
    y = temp;
    printf("After swapping, value of a = %f \n", x);
    printf("After swapping, value of b = %f", y);
}