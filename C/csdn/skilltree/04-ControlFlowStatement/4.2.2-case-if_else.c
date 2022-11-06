// 输入两个整数，使用if-else语句求两个整数之间的较大值。

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int num_1 = 0;
    int num_2 = 0;
    int max_num = 0;

    printf("请输入第1个整数：");
    scanf("%d", &num_1);
    printf("请输入第2个整数：");
    scanf("%d", &num_2);

    if (num_1 >= num_2)
        max_num = num_1;
    else
        max_num = num_2;

    printf("两数之间的较大值为：%d", max_num);

    return 0;
}