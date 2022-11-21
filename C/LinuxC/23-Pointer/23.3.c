#include <stdio.h>

int main(void)
{
    int a[0];
    int *pa = &a[0];
    printf("1-pa: %p\n", pa);
    
    pa++;
    printf("2-pa: %p\n", pa);
    printf("3-pa: %p\n", pa+2);
    printf("4-pa: %d\n", *(pa+2));
    printf("5-pa: %d\n", pa[2]);

    return 0;
}