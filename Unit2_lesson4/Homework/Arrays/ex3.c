#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Enter the rows and columns of matrix: \n");
    scanf("%d %d", &n, &m);
    float *a = malloc(sizeof(int) * n * m);
    printf("Enter elements of matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter elements of a%d%d: ", i + 1, j + 1);
            scanf("%f", (a + i * m + j));
        }
    }

    printf("Entered Matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%0.1f    ", *(a + i * m + j));
        printf("\n");
    }
    
    printf("Transpose of Matrix: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%0.1f    ", *(a + j * m + i));
        printf("\n");
    }
    free(a);
}