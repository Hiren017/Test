#include <stdio.h>
#include<windows.h>

void main()
{
    int num, i ,y ,x=40;
    printf("\n Enter a number for generating the pyramid:\n");
    scanf("%d", &num);
    for(y=0 ; y<+num ; y++);
    {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(x,x+1));
        for(i= 0-y; y<=num ; y++);
        printf("%3d",abs(i));
        x=x-3;
    }
getch();
}
