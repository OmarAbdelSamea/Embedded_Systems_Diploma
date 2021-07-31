#include <stdio.h>

#define NUM_OF_INTERVALS 2

int is_prime(int num)
{
    int j;
    for (j = 2; j <= num / 2; j++)
    {
        if (num % j == 0)
            return 0;
    }
    if (j == num / 2 + 1)
        return 1;
}

void prime_between_intervals(int interval1, int interval2)
{
    int i;
    printf("prime numbers between %d and %d are: ", interval1, interval2);
    for (i = interval1; i <= interval2; i++)
    {
        if (is_prime(i))
            printf("%d ", i);
    }
}

void get_intervals(int *intervals)
{
    int i;
    printf("Enter two numbers(intervals): ");
    for (i = 0; i < NUM_OF_INTERVALS; i++)
    {
        scanf("%d", intervals + i);
    }
}
int main()
{
    int intervals[NUM_OF_INTERVALS];
    get_intervals(intervals);
    prime_between_intervals(intervals[0], intervals[1]);
}