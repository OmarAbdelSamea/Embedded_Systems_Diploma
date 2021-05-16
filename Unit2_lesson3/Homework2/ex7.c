#include <stdio.h>

int fact(int n);

int main()
{
    int x;
    printf("Enter a integer: ");
    scanf("%d", &x);
    printf("Factorial = %d", fact(x));
}

int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n*fact(n - 1); 
}


    