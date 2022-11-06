// 使用goto语句模拟循环，求10以内的正整数之和。

#include <stdio.h>

int main(int argc, char** argv)
{
    int sum = 0;
    int i = 0;
    
    LOOP: if (++i <= 10)
    {
        sum += i;
        goto LOOP;
    }

    printf("10以内的正整数之和为：%d", sum);

    return 0;
}