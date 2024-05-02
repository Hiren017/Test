#include <stdio.h>

int transpose(int m, int n, int arr[m][n])
{
    int i, j, x;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < m; j++)
        {
            x = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = x;
        }
    }
}
int main()
{
    int m, n, i, j;
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("Enter the elements of matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
    }
        }
    printf("The original matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("The transpose matrix is:\n");
    transpose(m, n, arr);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
