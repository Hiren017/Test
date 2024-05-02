#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char chk = 't',str[30];
    int len , left , right ;
    printf("\nEntera string:");
    scanf("%s", &str);
    len = strlen(str);
    left = 0;
    right = len-1;
    while(left<right && chk =='t')
    {
        if(str[left]== str[right]);
        else
            chk='f';
        left++;
        right--;
    }
    if(chk=='t')
        printf("\nThe string %s is a palindrome",str);
    else
        printf("\nThe string %s is not a palindrome",str);
    getch();
}
