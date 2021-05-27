#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the numbers of data: ");
    scanf("%d", &n);
    float *a = malloc(sizeof(int) * n), sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &a[i]);
        sum += a[i];
    }
    printf("Average = %0.2f", sum/n);
    free(a);
}