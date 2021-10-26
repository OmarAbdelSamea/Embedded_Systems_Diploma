#include <stdio.h>

union job
{
    char name[32];
    float salary;
    int worker_no;
} u;

struct job1
{
    char name[32];
    float salary;
    int worker_no;
} s;

int main()
{
    printf("\nsize of union = %ld", sizeof(u));
    printf("\nsize of structure = %ld \n", sizeof(s));
    return 0;
}
