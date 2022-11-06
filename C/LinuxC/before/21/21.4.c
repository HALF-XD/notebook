#include <stdio.h>

void myfunc(void)
{
    printf("1: %s\n", __func__);
}

int main(void)
{
    myfunc();
    printf("2: %s\n", __func__);
    return 0;
}