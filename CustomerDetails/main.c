#include <stdio.h>
#include<string.h>

#define CUSTOMERS 10

main()
{
    char first_name[20][10] , second_name[20][10],
         surname[20][10] ,name[20][20],
         telephone[20][10] , dummy[20];

    int i,j;
    printf("Input names and  telephone numbers \n");
    printf("?\n");
    for(i=0 ; i<CUSTOMERS ; i++)
    {
        scanf("%s %s %s %s", first_name[i],second_name[i], surname[i], telephone[i]);

              strcpy(name[i] , surname[i]);
              strcat(name[i], ",");
              dummy [0] = first_name[i][0];
              dummy[1] = '\0';
              strcat(name[i], dummy);
              strcat(name[i], ",");
              dummy[0] = second_name[i][0];
              dummy[1] = '\0';
              strcat(name[i], dummy);
    }

    for(i=1 ; i<= CUSTOMERS-1 ; i++)
        for(j=1 ; j<=CUSTOMERS-i ; j++)
            if(strcmp(name[j-1], name[j] > 0))
            {
                strcpy(dummy , name[j-1]);
                strcpy(name[j-1],name[j]);
                strcpy(name[j], dummy);

                strcpy(dummy,telephone[j-1]);
                strcpy(telephone[j-1],telephone[j]);
                strcpy(telephone[j] , dummy);
            }
    printf("\n CUSTOMERS LIST IN ALPHABETS ORDER \n\n");
    for(i=0 ; i<CUSTOMERS ; i++)
    {
        printf(" %-20s\t %-10s\n" , name[i],telephone[i]);
    }
    return 0;
}
