#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[13] , sum=0;
    for(int i=0 ; i<13 ; i++)
    {
        scanf("Enter a ISBN : %d", &num);
    }
    for(int i=0 ; i<13 ; i++)
    {
      printf("%d" , num[i]);
      printf("\n");
    }
    for(int i=0 ; i<13 ; i++)
    {
        if(num[i] != '-');
        sum = sum+num[i];
    }
    if(sum%11==num[13])
           {
               printf("The ISBN is valid");
               printf("\n");
           }
    else
    {
        printf("The ISBN is invalid");
    }
return 0;
}

