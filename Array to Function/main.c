//#include <stdio.h>
//
//main()
//{
//    float largest (float a[] , int n);
//    float value[4] = {2.5 , -4.75 , 1.2 , 3.67};
//    printf("%f\n", largest(value,4));
//
//}
//
//float largest(float a[] , int n)
//{
//    int i;
//    float max;
//    max = a[0];
//    for(i = 1 ; i<n ; i++)
//        if(max < a[i])
//    max = a[i];
//    return(max);
//}


//
//#include<stdio.h>
//#define SIZE 5
//float std_dev(float a[] , int n);
//float mean (float a[] , int n);
//main()
//{
//    float value[SIZE];
//    int i;
//    printf("Enter %d float values\n" , SIZE);
//    for(i=0 ; i<SIZE  ; i++)
//        scanf("%f", &value[i]);
//    printf("Std.deviation is %f\n" , std_dev(value,SIZE));
//}
//float std_dev(float a[] ,int n)
//{
//    int i ;
//    float x,sum = 0.0;
//    x = mean(a,n);
//    for(i=0 ; i<n ; i++)
//        sum += (x-a[i]) * (x-a[i]);
//        return(sqrt(sum/(float)n));
//}
// float mean(float a[] , int n)
//{
//    int i;
//    float sum = 0.0;
//    for(i=0 ; i<n ; i++)
//        sum = sum + a[i];
//    return(sum/(float)n);
//}



// 2D ARRAYS
#include<stdio.h>
void sort(int m , int x[]);
main()
{
    int i;
    int marks[5] = {40 , 90 , 73 , 81 , 35};

    printf("Marks before sorting \n");
    for(i=0 ; i<5 ; i++)
        printf("%d" , marks[i]);
    printf("\n\n");

    sort(5,marks);
    printf("Marks after sorting\n");
    for(i=0 ; i<5 ; i++)
        printf("%4d" , marks[i]);
    printf("\n");
}
void sort(int m, int x[ ])
{
    int i,j,t;

    for(i=1 ; i<=m-1 ; i++)
        for(j=1 ; j<=m-1 ; j++)
        if(x[j-1] >= x[j])
    {
        t=x[j-1];
        x[j-1] = x[j];
        x[j] = t;
    }
}

