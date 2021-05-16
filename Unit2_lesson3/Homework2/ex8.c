#include <stdio.h>

int main()
{
    char op;
    float x, y, ans;
    printf("Enter operator either + or - or * or /: ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%f \n%f", &x, &y);
    switch (op)
    {
    case '*':
        ans = x * y;
        break;

    case '-':
        ans = x - y;
        break;

    case '+':
        ans = x + y;
        break;

    case '/':
        ans = x / y;
        break;
    
    default:
        break;
    }
    printf("%f %c %f = %f", x, op, y, ans);
}