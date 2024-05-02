#include <stdio.h>

int main()
{
    float num ;
    float a = 0;
    do
    {
        printf("Enter a number: ");
        scanf("%f",&num);
        a = a + num;
    }while(a<10.0);

    printf("%f",a);
    return 0;
}
