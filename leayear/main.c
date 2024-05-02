
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{

//    printf("\n Number of arguments: %d", argc);
//
//    for(int i = 0; i < argc; i++)
//    {
//        printf("\n Argument-%d is: %s", i, argv[i]);
//    }
    if ( argc > 1 && argc < 3)
    {
        int year = 0;
        year = atoi(argv[1]);
        if ( year != 0)
        {
            if((year %4 == 0 && year % 100 != 0) || year %400 == 0)
            {
               printf("\nThe year is a leap year");
            }
            else
            {
                printf("\nThe year is not a leap year");
            }
        }
        else
        {
            printf("\n Invalid arguments -1");
        }
    }
    else
    {
     printf("\n Invalid arguments -2");
    }

return 0;
}
//  int year = &argv[2];
//    if( int leap_year ())
//    {
//         printf("The year is a leap year");
//    }
//    else
//    {
//        printf("The year is not a leap year");
//    }
//return 0;


//int leap_year(int year)
//{
//    return((year %4 == 0 && year % 100 != 0) || year %400 == 0);
//}



/*

#include<stdio.h>
int main( int argc , int *argv[])
{
    printf("\n Number of Arguments:  %d", argc);
    for(int i =0 ; i< argc ; i++)
    {
        printf("\n Arguments - %d is  : %d", i , argv[i]);
    }
}



#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("Program name is: %s", argv[0]);

    if (argc == 1)
    {
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
    }
    if (argc >= 2)
    {
        printf("\nNumber Of Arguments Passed: %d", argc);
        printf("\nFollowing Are The Command Line Arguments Passed");
        for (int i = 0; i < argc; i++)
            printf("\n argv[%d]: %s", i, argv[i]);
    }
    return 0;
}
*/
