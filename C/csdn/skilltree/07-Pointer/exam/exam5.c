#include <stdio.h>

int max(int a, int b)
{
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    return a > b ? a : b;
}

int main(int argc, char** argv)
{
    int x, y, max_val;
    // int (*p_max)(int a, int b) = max; // 1
    // int (*p_max)(int, int) = &max; // 2
    // int *p_max(int, int) = max; // 3 error: illegal initializer (only variables can be initialized
    int (*p_max)(int, int) = max; // 4 

    printf("请输入两个整数,空格隔开: ");
    scanf("%d %d", &x, &y);

    max_val = (*p_max)(x, y); // 1, 4
    // max_val = p_max(x, y); // 2

    printf("两数中最大值为：%d\n", max_val);

    return 0;
}