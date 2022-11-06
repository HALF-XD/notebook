/*
程序调用自身的行为就是递归。
优点是为具有某些特征的编程问题提供了最简单的策略
缺点是层层调用，算法的复杂度可能过高，以致于快速耗干了计算机的内存资源，不方便阅读和维护等。
*/ 

// 在不使用循环的情况下，使用递归按升序输出1到100的所有整数。

#include <stdio.h>

void print(int number);
void print_v2(int *number);

int main(int argc, char **argv)
{
    int num = 1;
    int num_v2 = 1;
    print(num);
    print_v2(&num_v2);
    return 0;
}

void print(int number)
{
    if (number <= 100)
    {
        printf("%d ", number);
        print(number + 1);
        // print(++number);
    }
}
                                  
void print_v2(int *number)
{                                  
    if (*number <= 100)
    {                              
        printf("%d ", *number);
        ++(*number);                              
        print_v2(number);
    }
}