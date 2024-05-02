#include <stdio.h>

int main()
{
    char str[] ;
    scanf("%c" , str);
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
        {
            length++;
        }
    printf("The length of the character string is %d\n", length);
    return 0;
}

