#include <stdio.h>

int main()
{
   long int num,x , a , reverse = 0;
   printf("Enter a number you want to reverse : ");
   scanf("%ld",&x);
   num = x;
   while(num != 0)
   {
       a = num%10 ;
       reverse =reverse*10 + a;
       num/=10;
   }
   printf("Reverse of %ld is %ld" , x , reverse);
   return 0;

}
