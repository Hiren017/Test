#include <stdio.h>
#include <stdlib.h>

int main()
{
   const int a, b, c, d ,m , n;
   float x1 , x2;
   scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&m,&n);
   x1 = ((m*d) - (b*n))/ ((a*d) - ( c*b));
   x2 = ((n*a) - (m*c))/ ((a*d) - ( c*b));
   if(((a*d) - (c*b)) == 0 )
   {
       printf("x1 :  %f \nx2 : %f" , x1 , x2);
   }
   else
   {
       printf("Invalid");
   }
   return 0;
}
