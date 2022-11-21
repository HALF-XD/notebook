// 任意输入3个整数，使用if语句对这3个整数由小到大进行升序排序。

#include <stdio.h>

/* 交换x和y */
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char** argv)
{
    int a, b, c;
    printf("请输入 a,b,c:\n"); 
    scanf("%d,%d,%d", &a, &b, &c);

    if (a > b)
        swap(&a, &b);
    if (a > c)
        swap(&a, &c);
    if (b > c)
        swap(&b, &c);

    printf("升序排序结果:\n");
    printf("%d,%d,%d\n", a, b, c);

    return 0;
}