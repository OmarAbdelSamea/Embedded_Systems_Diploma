#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n), sum = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the element to be searched: ");
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            printf("Number found at the location = %d", i + 1);
            break;
        }
    }
    free(a);
}