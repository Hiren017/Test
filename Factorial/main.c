#include <stdio.h>
int factorial (int i);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num , factorial(num));
    return 0;
}

int factorial (int i)
{
   if (i<=1)
   {
       return 1;
   }
   return i*factorial(i-1);
}
