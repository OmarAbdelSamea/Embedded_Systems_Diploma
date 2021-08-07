#include <stdio.h>

int power(int num, int power_num)
{
    if (power_num > 0)
        return num * power(num , power_num - 1);
    else
        return 1;
}

int main()
{
    int num, power_num;
    printf("Enter base number: ");
    scanf("%d", &num);
    printf("Enter power number: ");
    scanf("%d", &power_num);
    printf("%d^%d  = %d", num, power_num, power(num, power_num));
}