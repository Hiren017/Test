#include <stdio.h>
#include <stdint.h>

typedef int16_t NUMBER_16BITS;
typedef int8_t  NUMBER_8BITS;

enum day  //=> int
{
    monday = 1,
    tuesday,
    wednesday,
    thursday = 8,
    friday,
    saturday,
    sunday
}DAY_NAME; //DAY_NAME is the variable name


//typedef enum day DAY_OF_MONTH;

void main(void)
{
    //DAY_NAME  current_day;
    DAY_NAME = tuesday;


    NUMBER_8BITS a = 20;
    char b = 'a';
    printf("Hello world!. Number is: %02d, %d\n", a, b);

    if (DAY_NAME == 2)
    {
        printf("\nDay is Tuesday");
    }
    return 0;
}
