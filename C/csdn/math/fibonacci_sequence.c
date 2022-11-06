// 使用函数递归的方法打印斐波那契数列的前n个数：0 1 1 2 3 5 8 13 21 34 ……
#include <stdio.h>

int fibonacci(int i)
{
    if (i == 0)
        return 0;
    if (i == 1)
        return 1;
    return fibonacci(i - 1) + fibonacci(i - 2);
}

int main(int argc, char** argv)
{
    int i = 0;
    int n = 0;

    printf("请输入你要打印的长度：");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        printf("%d ", fibonacci(i));

    return 0;
}