#include<stdio.h>
int main()
{
    char address[80];
    scanf("%[a-z]", address);
    printf("%-80s\n\n", address);
    return 0;
}
   /// will not work because in between a-z it only takes characters
