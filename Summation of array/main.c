#include <stdio.h>
#include <stdlib.h>

#define MAXGIRLS 4
#define MAXITEMS 3

int main()
{
    int value[MAXGIRLS][MAXITEMS];
    int girls_total[MAXGIRLS] , item_total[MAXITEMS];
    int i,j,grand_total;

    printf("Input Data\n");
    printf("Enter Values , one at a time, row-wise\n\n");

    for(i=0 ; i<MAXGIRLS ; i++)
    {
        girls_total[i] = 0;
        for(j=0; j<MAXITEMS; j++)
        {
            scanf("%d" , &value[i][j]);
            girls_total[i] = girls_total[i] + value[i][j];
        }
    }
    for(j=0 ; j<MAXITEMS ; j++)
    {
        item_total[j] = 0;
        for(i=0 ; i<MAXGIRLS ; i++)
        {
            item_total[j] = item_total[j] + value[i][j];
        }
        grand_total = 0;
        for(i=0 ; i<MAXGIRLS ; i++)
        {
            grand_total = grand_total + girls_total[i];
        }
        printf("\n GIRLS TOTALS\n\n");

        for(i=0 ; i<MAXGIRLS ; i++)
            printf("Salesgirl[%d]=%d\n" , i+1 ,girls_total[i]);
        printf("\n ITEM TOTALS\n\n");
        for(j=0 ; j<MAXITEMS ; j++)
            printf("Item[%d] = %d\n",j+1 , item_total[j]);
        printf("\nGrand Total = %d\n",grand_total);
    }
        return 0;
}
