#include <stdio.h>
#include <string.h>
void reverse_string(char *str, int str_len)
{
    if (str_len == -1)
    {
        return;
    }
    printf("%c", *(str + str_len));
    reverse_string(str, str_len - 1);
}

int main()
{
    char str[512];
    printf("Enter a sentence: ");
    fgets(str, 512, stdin);
    reverse_string(str, strlen(str) - 1);
}