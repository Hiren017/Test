#include <stdio.h>
#include<stdint.h>

static uint8_t m = 0;
int main()
{
        int  a;
        float b;
        double c;
        long long int d;
        char e ;
        printf(" size of int a - %d", sizeof(a));
        printf(" \n size of float b - %d", sizeof(b));
        printf(" \n size of double c - %d", sizeof(c));
        printf(" \n size of long long int d - %d", sizeof(d));
        printf(" \n size of char e- %d", sizeof(e));
        //int8_t m;
        int16_t n;
        int32_t o;
        int64_t p;
        uint16_t q;
        printf(" \nsize of int8_t - %d", sizeof(m));
        printf(" \n size of int16_t - %d", sizeof(n));
        printf(" \n size of int32_t - %d", sizeof(o));
        printf(" \n size of int64_t- %d", sizeof(p));
        printf("\n size of uint16_t %d", sizeof(q));
        m = 0;
        m += 3;

return 0 ;
}
