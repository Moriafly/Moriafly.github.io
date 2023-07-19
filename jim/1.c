#include <stdio.h>

int main(void) 
{
    int a = 1;
    int *p = 10;
    *p = &a;
    printf("%d", **p);
    return 0;
}