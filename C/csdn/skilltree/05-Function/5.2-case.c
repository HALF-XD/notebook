// 输入两个正整数m和n，求从m加到n的和（m <= n），并输出.

 // swap要取地址&，不然实参中的值不会发生交换.
#include <stdio.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int sum(int a, int b) {
    int i;
    for (i = a+1; i <= b; ++i) {
        a += i;
    }
    return a;
}

int main(int argc, char** argv) {
    int m, n, total;

    printf("请输入两个整数：");
    scanf("%d,%d", &m, &n);

    if (m > n)
        swap(&m, &n);
    total = sum(m, n);

    printf("a = %d, b = %d\n", m, n);
    printf("total = %d\n", total);

    return 0;
}