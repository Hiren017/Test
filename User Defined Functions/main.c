



// NO ARGUMENTS AND NO RETURN VALUES --------------


//#include <stdio.h>
//#include <stdlib.h>
//
//void printline (void);
//void value (void);
//int main()
//{
//    printline();
//    value();
//    printline();
//}
//
//void printline(void)
//{
//    int i ;
//    for(i=1 ; i<=35 ; i++)
//    {
//        printf("%c" , '-');
//    }
//    printf("\n");
//}
//
//void value(void)
//{
//    int year , period ;
//    float inrate , sum , principal;
//
//    printf("Principal Amount?");
//    scanf("%f", &principal);
//    printf("Interest rate ?    ");
//    scanf("%f" , &inrate);
//    printf("Period?              ");
//    scanf("%d",&period);
//
//    sum = principal;
//    year = 1;
//    while(year <= period)
//    {
//        sum = sum*(1+inrate);
//        year = year + 1;
//    }
//    printf("%8.2f %5.2f %5d %12.2f\n",principal , inrate , period , sum);
//}


// ARGUMENTS BUT NO RETURN VALUE -------------

#include<stdio.h>
void printline (char c);
void value(float , float , int);

main()
{
    float principal , inrate ;
    int period ;

    printf("Enter pricipal amount , interest");
    printf("rate , and period \n");
    scanf("%f %f %f", &principal , &inrate , &period);
    printline('Z');
    value(principal,inrate,period);
    printline('C');
}

void printline( char ch)
{
    int i ;
    for(i=0 ; i<=52 ; i++)
    {
        printf("%c" , ch);
    }
        printf("\n");
}

void value(float p , float r , int n)
{
    int year ;
    float sum ;
    sum = p;
    year = 1;
    while(year <= n)
    {
        sum = sum*(1+r);
        year = year + 1;
    }
    printf("%f\t%f\t%d\t%f\n" , p,r,n,sum);
    return 0;
}




// FUNCTION CALL - ARGUMENTS WITH RETURN VALUES----



#include <stdio.h>

void printline(char ch , int len);
value(float , float ,int);

int main()
{
  float principal,inrate , amount ;
  int period;
  printf("Enter principal amount, interest");
  printf("rate , and period\n");
  scanf("%f %f %d", &principal, &inrate , &period);
  printline('*' , 52);
  amount = value(principal, inrate , period);
  printf("\n%f\t%f\t%d\t%f\n\n",principal , inrate , period , amount);
  printline('=', 52);
}
void printline(char ch , int len)
{
    int i;
    for(i=1;i<=len ; i++)
        printf("%c", ch);
    printf("\n");
}
value(float p , float r , int n )
{
    int year ;
    float sum;
    sum = p; year = 1;
    while(year <= n)
    {
        sum = sum*(1+r);
        year = year+1;
    }
    return(sum);
}


/

