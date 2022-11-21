// 使用for循环，打印九九乘法表。

#include <stdio.h>

int main(int argc, char** argv)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= 9; ++i) 
    {
        for(j = 1; j <= i; ++j)
            printf("%d*%d=%2d\t", i, j, i * j);
        printf("\n");
    }

    return 0;
}