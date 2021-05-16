#include <stdio.h>

int main()
{
    char x;
    printf("Enter an alphabet: ");
    scanf("%c", &x);
    if (x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'o' || x == 'O' || x == 'i' || x == 'I' || x == 'u' || x == 'U')
        printf("%c is a vowel.", x);
    else
        printf("%c is a consonant.", x);
}