#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    fptr = fopen("test.txt","r");
    if( fptr != NULL)
    {
        printf("File open successful");
    }
    else
    {
        printf("File open unsuccessful");
    }
    return 0;
}


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    fptr = fopen("test.txt", "w");
    if (fptr == NULL) {
        printf("The file is not opened ");
        exit(0);
    }
    else {
        printf("The file is created Successfully.");
    }

    return 0;
}
*/
