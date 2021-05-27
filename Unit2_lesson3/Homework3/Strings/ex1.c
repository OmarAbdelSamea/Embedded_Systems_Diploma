#include <stdio.h>

int main()
{
    char a[100], k, count = 0;
    printf("Enter a string: ");
    fgets(a, 100, stdin);
    printf("Enter a character to find frequency: ");
    scanf("%c", &k);
    for (int i = 0; a[i] != 0; i++)
    {
        if (a[i] == k)
            count++;
    }

    printf("Frequency of %c = %d", k, count);
}