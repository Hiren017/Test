#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b;
    printf("Enter a hex number");
    scanf("%x",&a);
    scanf("\n %x", &b);
    printf(" a^b : %x\n" , a^b);
    printf(" a&b : %x\n", a&b);
    printf("a | b : %x\n", a | b);
    return 0;
}
