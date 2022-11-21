#include <stdio.h>

int *swap(int *px, int *py)
{
    printf("1-%d,%p\n",*px,px);
    printf("2-%d,%p\n",*py,py);
    int **ppx = &px; 
    printf("11-%p\n",ppx);
    printf("22-%p\n",ppy);
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
    printf("3-%d,%p\n",*px,px);
    printf("4-%d,%p\n",*py,py);
    return px;
}

int main(void)
{
    int i = 10, j = 20;
    int *p = swap(&i, &j);
    printf("now i=%d j=%d *p=%d\n", i, j, *p);
    return 0;
}