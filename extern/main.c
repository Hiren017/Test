#include "main.h"

int a = 50;
int add (); //function declaration


int main()
{
    int a ;
    a = 20;
    printf("\n Value of a (in main): %d", a);
    add();
    printf("\n Value of a (in main): %d", a);
    //add();
    func2();
    return 0;
}
int add () //function definition
{
    //static int a = 40;
    a += 1;
    printf("\n Value of a: (in add func): %d", a);
}
