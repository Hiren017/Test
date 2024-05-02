


// FUNCTION CALL - ARGUMENTS WITH RETURN VALUES----

//
//
//#include <stdio.h>
//
//void printline(char ch , int len);
//value(float , float ,int);
//
//int main()
//{
//  float principal,inrate , amount ;
//  int period;
//  printf("Enter principal amount, interest");
//  printf("rate , and period\n");
//  scanf("%f %f %d", &principal, &inrate , &period);
//  printline('*' , 52);
//  amount = value(principal, inrate , period);
//  printf("\n%f\t%f\t%d\t%f\n\n",principal , inrate , period , amount);
//  printline('=', 52);
//}
//void printline(char ch , int len)
//{
//    int i;
//    for(i=1;i<=len ; i++)
//        printf("%c", ch);
//    printf("\n");
//}
//value(float p , float r , int n )
//{
//    int year ;
//    float sum;
//    sum = p; year = 1;
//    while(year <= n)
//    {
//        sum = sum*(1+r);
//        year = year+1;
//    }
//    return(sum);
//}

 //NO ARGUMENTS BUT A RETURN VALUE -----------------


 #include<stdio.h>

 void mathoperation(int x, int y , int *s , int *d);
 main( )
 {
     int x = 20 , y = 10 , s , d;
     mathoperation(x,y,&s, &d);

     printf("s=%d\n d=%d\n" , s,d);
 }

 void mathoperation(int a , int b , int *sum , int*diff)
 {
     *sum = a+b;
     *diff = a-b;
 }
