#include <stdio.h>

void PascalTriangle(int n)
{
  int triangle[n][n];
  for (int i = 0; i < n; i++)
    {
    triangle[0][i] = 1;
    }
  for (int i = 1; i < n; i++)
    {
     for (int j = 0; j <= i; j++)
     {
         triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
     }
    }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("%d ", triangle[i][j]);
    }
    printf("\n");
  }
}
int main()
{
  PascalTriangle(10);
  return 0;
}
