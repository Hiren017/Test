//#include <stdio.h>
//void space(int x) ;
//
//int main()
//{
//  printf("12345");
//  space(7);
//  printf("67890");
//  return 0;
//}
//void space(int x)
//{
//  for (int i = 0; i < x; i++)
//    {
//    printf("   ");
//    }
//}


#include<stdio.h>
int factorial(int x);
int main()
{
    int x = 5;
    printf("%d" , factorial(x));
}
  int factorial (int i)
{
   if (i<=1)
   {
       return 1;
   }
   return i*factorial(i-1);
}


// 9.3


//
//#include <stdio.h>
//int find_largest(int m, int n, int matrix[m][n])
//{
//  int largest = matrix[0][0];
//  for (int i = 0; i < m; i++)
//    {
//    for (int j = 0; j < n; j++)
//     {
//      if (matrix[i][j] > largest)
//      {
//        largest = matrix[i][j];
//      }
//     }
//    }
//  return largest;
//}
//int main()
//{
//  int m = 3, n = 3;
//  int matrix[3][3] =
//   {{1, 2, 3},
//    {4, 13, 6},
//    {7, 8, 9}};
//  int largest = find_largest(m, n, matrix);
//  printf("The largest element in the matrix is %d\n", largest);
//  return 0;
//}
