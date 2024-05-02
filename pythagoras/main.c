#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l , b ,h;
    scanf("%d %d %d", &l ,&b ,&h);
    if( h>l && h>b)
    {
        printf("%d is height of the triangle ",h);
    }
    else if ( l>b && l>h)
    {
        printf("%d is height of the triangle ",l);
    }
    else
    {
        printf("%d is height of the triangle ",b);
    }
return 0;
}
