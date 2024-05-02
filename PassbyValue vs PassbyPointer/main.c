#include <stdio.h>

//void function1(void);
//void function2(void);
//main()
//{
//    int m = 1000;
//    function2();
//    printf("%d\n",m);
//}
//void function1(void)
//{
//    int m = 10;
//    printf("%d\n", m);
//}
//
//void function2(void)
//{
//    int m = 100;
//    function1();
//    printf("%d\n",m);
//}
//




void stat(void);
main()
{
    int i ;
    for(i=0 ; i<3 ; i++)
        stat();
}
void stat(void)
{
    static int x = 0 ;

    x = x+1;
    printf("x = %d\n", x);
}

