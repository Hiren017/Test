#include <stdio.h>
#include <stdlib.h>

int main()
{
    float units , bill;
    scanf("%f", &units);
    if(units <=200)
    {
        bill = units * 0.80 ;
    }
    else if (units>200 && units<=300)
    {
        bill = units * 0.90 ;
    }
    else
    {
        bill = units * 1 ;
    }
    printf("%f", bill);
    if(bill > 400)
    {
        bill = bill + (bill *(15*100));
    }
    printf("%f", bill);
return 0 ;
}
