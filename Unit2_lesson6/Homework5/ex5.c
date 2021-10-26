#include <stdio.h>

#define PI               3.14
#define CIRCLE_AREA(r)   PI * r * r

int main()
{
    int raduis;
    printf("\n\nPlease Enter The Raduis: ");
    scanf("%d", &raduis);
    printf("Area = %.02f\n", CIRCLE_AREA(raduis));
}