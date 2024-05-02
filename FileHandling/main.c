#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    char s[30];
    fptr = fopen("test.txt","a+");
    if( fptr != NULL)
    {
        printf("File open successful");
    }
    else
    {
        printf("File open unsuccessful");
    }

    fgets(s,30,fptr);
    printf("File content: %s", &s);

    fputs("Hello Kriti",fptr);

    fgets(s,30,fptr);
    printf("File content: %s", &s);

    fclose(fptr);


    return 0;
}
