#include<stdio.h>

typedef struct
{
    float real, imag;
} SComplex;

SComplex add_two_complex(SComplex * num1, SComplex * num2)
{
    SComplex sum;
    sum.real = num1->real + num2->real;
    sum.imag = num1->imag + num2->imag;

    return sum;
}

int main()
{
    SComplex num1, num2, sum;
    printf("For 1st complex number \n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("For 2nd complex number \n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f", &num2.real, &num2.imag);
    sum = add_two_complex(&num1, &num2);

    printf("Sum: %0.1f+%0.1fi", sum.real, sum.imag);
}