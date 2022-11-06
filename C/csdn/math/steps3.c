// 楼梯有n阶台阶，一次可以上1阶、2阶或者3阶台阶，使用递归的方法计算出有多少种走完楼梯的方式。

// func.h
#ifndef FUNC_FILE
#define FUNC_FILE

int steps(int);

#endif

// func.c
// #include "func.h"

int steps(int n)
{
    if (n < 0)
        return 0;
    if (n == 0 || n == 1)
        return 1;
    if (n == 2)
        return 2;
    return steps(n - 1) + steps(n - 2) + steps(n - 3);
}

// header.c
#include <stdio.h>
// #include "func.h"

int main(int argc, char** argv)
{
    int n;
    printf("请输入台阶数量(n)：");
    scanf("%d", &n);
    printf("一共有 %d 种走完楼梯的方式!\n", steps(n));
    return 0;
}