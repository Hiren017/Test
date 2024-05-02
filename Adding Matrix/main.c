#include<stdio.h>

#define N 3
int A[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int B[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
int C[N][N];

void addMatrices(int A[N][N] , int B[N][N] , int C[N][N])
{
for(int i=0 ; i<N ; i++)
    {
        for(int j=0 ; j<N ; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int A[N][N], int B[N][N], int C[N][N])
{
    for (int i = 0; i < N; i++)
        {
        for (int j = 0; j < N; j++)
            {
            C[i][j] = A[i][j] - B[i][j];
            }
        }
}

int main()
{

    addMatrices(A, B, C);
    printf("The result of the addition: \n");
    for (int i = 0; i < N; i++)
     {
        for (int j = 0; j < N; j++)
            {
            printf("%d ", C[i][j]);
            }
            printf("\n");
     }

    subtractMatrices(A, B, C);
    printf("The result of the subtraction: \n");
    for (int i = 0; i < N; i++)
        {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
        }
    return 0;
}


