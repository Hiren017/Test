#include <stdio.h>
#include <math.h>

int main()
{
    const int a , b,  c;
    int x1,x2;
    scanf("%d %d %d", &a , &b ,&c);
    x1 = ((-b) + (sqrt( (b*b) - (4*a*c)))/(2*a));
    x2= ((-b) -(sqrt( (b*b) - (4*a*c)))/(2*a));
    if (a==0 && b==0)
    {
        printf("No solution");
    }
    else
    {
        printf("%d %d",x1, x2);
    }
    return 0 ;
}
