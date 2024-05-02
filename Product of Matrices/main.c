//#include <stdio.h>
//#include <stdlib.h>
//
//void multiplyMatrices(int m, int n, int a[m][n], int b[n][m], int c[m][m])
//{
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            int sum = 0;
//            for (int k = 0; k < n; k++)
//            {
//                sum += a[i][k] * b[k][j];
//            }
//
//            c[i][j] = sum;
//        }
//    }
//}
//int main()
//{
//    int m = 3, n = 2;
//
//    int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};
//    int b[2][2] = {{7, 8}, {9, 10}};
//    int c[m][m];
//
//    multiplyMatrices(m, n, a, b, c);
//
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            printf("%d ", c[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}



#include <stdio.h>
#include <string.h>
void convert_to_uppercase(char *string)
{
  int i;
  for(i=0; i<strlen(string); i++)
  {
    if(string[i] >= 'a' && string[i] <= 'z')
        {
           string[i] = string[i] - 32;
        }
  }
}
int main()
{
  char str[] = "kriti gupta";
  convert_to_uppercase(str);
  printf("%s\n", str);
  return 0;
}
