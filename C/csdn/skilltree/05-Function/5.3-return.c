// 没有返回值的函数为空类型，用void表示.
// 输入一个整数，判断是否为素数。

#include <stdio.h>

void prime(int n)
{
    int is_prime = 1, i;

    if (n < 0)
    {
        printf("%d 是一个非法输入！\n", n);
        return;
    }
    else if (n < 2)
    {
        printf("%d 不是一个素数！\n", n);
        return;
    }
        
    for (i = 2; i < n; i++)
        if (n % i == 0)
        {
            is_prime = 0;
            break;
        }

    if(is_prime == 1)
        printf("%d 是一个素数！\n", n);
    else
        printf("%d 不是一个素数！\n", n);
}

int main(int argc, char** argv)
{
    int num, is_prime;
    printf("请输入一个整数：");
    scanf("%d", &num);
    prime(num);

    return 0;
}