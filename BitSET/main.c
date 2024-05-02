#include <stdio.h>
#include <stdint.h>
#define SIZE 65535

int main()
{
    unsigned int number,i;
    do
    {
            printf("\nEnter a 16 bit number : ");
            scanf("%d" , &number);

    }while(number>SIZE);

    //printf("\nThe number is:%d",number);
    printf("\nWhich ith bit you want to set?");
    scanf("%d",&i);
    //printf("%d", (1 << i));
    number = number | (1<<i);
    printf("\n0x%04x",number);
    return 0;

}

