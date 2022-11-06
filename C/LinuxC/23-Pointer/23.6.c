#include <stdio.h>

int main(void)
{
    // int *a[10];
    // int **pa = &a[0];
    // printf("1-%p\n",a);
    // printf("2-%p\n",pa);
    // printf("3-%p\n",a[1]);
    // printf("4-%p\n",pa[2]);

    int i;
    for(i = 0; i< argc;i++)
        printf("argv[%d]=%s\n", i, argv[i]);

    for(i = 0; argv[i] != NULL; i++)
        printf("argv[%d]=%s\n", i, argv[i]);
    return 0;
}