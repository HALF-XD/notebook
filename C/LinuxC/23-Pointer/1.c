#include <stdio.h>

int main()
{
    int i;
    int *pi = &i;
    char c;
    char *pc = &c;

    printf("%d \n", i);
    printf("%p \n", pi);
    printf("%d \n", c);
    printf("%p \n", pc);
}

/*
这里的 & 是取地址运算符(Address Operator)
&i 表示取变量i的地址
*/