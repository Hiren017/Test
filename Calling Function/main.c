//#include <stdio.h>
//
//#define X 30
//#define Y 40
//
//int exchange(int x , int y);
//
//main()
//{
//    int x ,y;
//    exchange();
//    printf("X = %d \n Y = %d ", x,y);
//    return 0 ;
//}
//
//int exchange(int X , int Y )
//{
//    z=X;    //30
//    X=Y;   //40
//    Y=z;   //30
//}
//
//#include<stdio.h>
//int exchange(int x , int y);
//main()
//{
//   extern int x ;
//   extern int y ;
//   scanf("%d %d " , &x , &y);
//   exchange();
//   printf("x = %d \n y = %d" , x,y);
//}
//
//int exchange(int x , int y)
//{
//    z=x;
//    x=y;
//    y=z;
//    return(x,y);
//}



#include <stdio.h>

int exchange(int x, int y);
int main()
{
  static int x=10 , y=20;
  printf("Before exchanging: x = %d, y = %d\n", x, y);
  exchange(x, y);
  printf("After exchanging: x = %d, y = %d\n", x, y);
  return 0;
}
int exchange(int x,int y)
{
  static int temp;
  temp = x;
  x = y;
  y = temp;
}
