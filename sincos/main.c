/*

#include <stdio.h>
#include<stdlib.h>

int main()
{
    printf("%d %c %f",10,'x',1.23);
    printf("%2d %c %4.2f", 1234 , 'x' , 1.23);
    printf("%d\t%4.2f", 1234, 456);
    printf("\"%08.2f\"", 123.4);
    printf("%d%d %d", 10,20);
}
*/


#include<stdio.h>
int main()
{
    int count = 1275;
    float price = (-235.74);
    char city[] = "cambridge";
    printf("%d %f",count , price);
    printf("%2d\n%f", count, price);
    printf("%d %f", price, count);
    printf("\n%s", city);
}



