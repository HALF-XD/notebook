/*
使用while循环求两个正整数的最大公约数和最小公倍数。
求解最大公约数和最小公倍数的基本思路：
1. 利用辗转相除法求出最大公约数。
2. 进而求出最小公倍数。
*/ 

#include <stdio.h>

int main(int argc, char** argv)
{
    int a, b, c, m, t;
    printf("请输入两个数：");
    scanf("%d,%d", &a, &b);
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    m = a * b;
    c = a % b;
    
    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }

    printf("最大公约数是：%d\n", b);
    printf("最小公倍数是：%d\n", m / b);
}