// 给定一个数组，获取最大值及其下标并输出。
// 指针的方式

#include <stdio.h>
#define LEN 10

int main(int argc, char** argv)
{
    int i, max, index = 0;
    int arr[LEN] = {7, 2, 1, 3, 6, 9, 4, 10, 5, 8};
    int *p = arr;

    max = arr[0];
    for (i = 0; i < LEN; ++i, ++p)
        if (*p > max)
        {
            max = *p;
            index = i;
        }

    printf("max = arr[%d] = %d\n", index, max);

    return 0;
}