/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

#include <stdio.h>
int main()
{
int a ,b ;
scanf("%d %d", a  b);
printf("%d", a+b);
return 0;
}


#include <stdio.h>
int main()
{

int n ,i;
scanf("%d",&n);
if( n != 0,1)
{
   for(i=2;i<= n/2 ;i++);
   printf("%d is a prime number");

}
return 0;
}

#include <stdio.h>
int main()
{
// char c = 'k';
 //printf("the ascii value of %c is %d" ,c,c);
 int a = 65;
 for(int i=0 ; i<=25 ; i++)
 {
     printf("%c = %d\n", a+i , a+i);
 }
return 0;
}



#include <stdio.h>
int main()
{
    int array[5]= {1,2,3,4,5};
    printf("%d\n", array[1]);
    printf("%d", sizeof(array));
    return 0;

}


#include <stdio.h>
int main()
{
    char arr[5],i ,n;
    char j , A;

    printf("Enter a hex number ");
    scanf("%x",&arr[5]);
    printf("The hex number is %x" ,arr[5]);
    for(i = 1 ; i <= arr[i] ; i++)
    {
     if( arr[i] > "0" && arr[i] <= "9")
     {

         for(n=4; n<=0 ; --n)
         {
             arr[i]= 16^n * arr[i];
             printf("%ld" ,arr[i]);
         }
     }
     else ( arr[i] >= "A" && arr[i] <= "F");
     {

     }
     printf("%ld" ,arr[i]);
    }
   // for(j = A; j<=arr[j]; j++)
   // {
   //arr[i]=
   //printf("%ld",arr[i]);
   // }

    return 0;
}
*/











/*
#include<stdio.h>
int main()
{

    int x = 1;
    printf("%d", x%10);
    return 0;
}




*/


/*

#include<stdio.h>
int main ()
{
    int hex[5];
    int digit,A ,n;
    int ans =0;
    int i = 0;
    printf("Enter a hex number: ");
    scanf("%x" , &hex[5]);
    n = 0;
    while (hex != 0)
    {
       digit = hex[n] % 10;
       hex[n] = hex[n]/ 10;
       ans = ans + digit * pow(16,i);
       i++ , n++;
    }
    printf("the decimal conversion of %x is %d",hex ,ans);
    return 0;
}




#include<stdio.h>
int main()
{

    int hex[5];
    int i, digit;
    int  n=0 , ans=0 ;
    printf("Enter a hex number ");
    scanf("%x",&hex[5]);
    printf("%x",hex[5]);
    for(i=5 ; i>=0 ; i--)
    {
    while (hex[i] != 0)
    {
        digit = hex[i] % 10;
        hex[5] = hex[i]/10;
        ans = ans + digit* 16^n;
        n++;
    }
    }
    printf("%d", ans);
    return 0;
}

*/




#include<stdio.h>
int main()
{
    int hex=0, digit=0, ans = 0, i = 0;
    printf("\n Input a hex number:");
    scanf("%x", &hex);

    while (hex!=0)
    {
        digit = hex % 10;
        ans = ans + (digit * pow(10,i));
        hex = hex/10;
        i++;
    }
    printf("\n The converted decimal number is:%d\n\n", ans);
}




