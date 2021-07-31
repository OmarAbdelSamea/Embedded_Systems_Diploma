#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, m;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n), sum = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the element to be inserted: ");
    scanf("%d", &k);
    printf("Enter the location: ");
    scanf("%d", &m);
    int f = 1;
    for (int i = 0; i < n; i++)
    {
        if (i == m && f)
        {
            i--; f = 0;
            printf("%d  ", k);
        }
        else
            printf("%d  ", a[i]);
    }
    
    free(a);
}