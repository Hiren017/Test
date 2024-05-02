#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=45 , b=37;
    int c , d ,e;
    c = a*(37%10);
    d = a*(37/10);
    e = d*10;
    printf("The multiplication of a and b is  %d", c+e);
    return 0;
}
