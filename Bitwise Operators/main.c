#include <stdio.h>

int main()
{
    int a,b;
    scanf("%x" , &a);
    a & ~(1<<6);
    printf("%x", a);
}
