// 224demo.c -- short转unsigned short
#include <stdio.h>

int main(void)
{
    short int v = -12345;
    unsigned short uv = (unsigned)v;
    printf("v = %d, uv = %d\n", v, uv);

    unsigned u = 4294967295u;
    int tu = (int)u;
    printf("u = %u, tu = %d\n",u,tu);
    return 0;
}