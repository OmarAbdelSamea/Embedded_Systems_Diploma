#include <stdio.h>

int main()
{
    float x, y, z, max_num;
    printf("Enter three numbers: ");
    scanf("%f\n%f\n%f", &x, &y, &z);
    if (x > y)
    {
        if (x > z)
            max_num = x;
        else
            max_num = z;
    }
    else if (y > z)
        max_num = y;
    else
        max_num = z;
    printf("Largest number = %f", max_num);
}