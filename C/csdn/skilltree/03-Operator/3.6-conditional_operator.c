// 三目运算符也叫条件运算符、三元运算符

// 输入三个整数，求出最大值并输出。
#include <stdio.h>

int main(int argc, char** argv)
{
    int a, b, c, max;
    printf("请输入3个整数: ");
    scanf("%d,%d,%d", &a, &b, &c);

    // max = a > b ? a > c ? a : c : b > c ? b : c;
    // max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    max = (c > ((a > b) ? a : b)) ? c : ((a > b) ? a : b);
    printf("3个整数中的最大的是: %d\n", max);

    return 0;
}