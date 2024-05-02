//#include <stdio.h>
//
//int main()
//{
//    int c,d;
//    char string[] = "CProgramming";
//    printf("-------------------\n");
//    for(c=0 ; c<=11 ; c++)
//    {
//        d = c+1;
//        printf("|%-12.*s|\n" ,d , string);
//    }
//    printf("|---------------|\n");
//    for(c=11 ; c>= 0 ; c--)
//    {
//        d = c+1;
//        printf("|%-12.*s|\n" , d, string);
//    }
//    printf("---------------------\n");
//    return 0;
//}



//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    int i,j,k;
//    char first_name[10] = {"Vishwanath"};
//    char second_name[10] = {"Pratap"};
//    char last_name[10] = {"Singh"};
//    char name [30];
//    strcat(first_name, second_name);
//    strcat(first_name, last_name);
//    printf("%s\n",first_name);
//    i = strlen(first_name);
//    printf("length of string is %d\n",i);
//    j = strcmp(first_name , last_name);
//    if(j != 0 )
//    {
//        printf("strings are not equal");
//    }
//    k = strcpy(first_name , second_name);
//    printf("\n%s", first_name);
//    return 0;
//}



#include<stdio.h>
#include<string.h>
#define ITEMS 5
#define MAXCHAR 20
int main()
{
    char string[ITEMS][MAXCHAR] , dummy[MAXCHAR];
    int i = 0, j = 0;
    printf("Enter names of %d items\n" , ITEMS);
    while(i<ITEMS)
        scanf("%s",string[i++]);
    for(i=1 ; i<ITEMS ;i++)
    {
        for(j=1 ; j<=ITEMS-1;j++)
        {
            if(strcmp(string[j-1] , string[j])>0)
            {
                strcpy(dummy , string[j-1]);
                strcpy(string[j-1],string[j]);
                strcpy(string[j] , dummy);
            }
        }
    }
    printf("\nAlphabetical list\n\n");
    for(i=0 ; i<ITEMS ; i++);
    {
        printf("%s", string[i]);
    }
    return 0 ;
}
