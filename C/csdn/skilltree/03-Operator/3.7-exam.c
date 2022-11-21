// 定义并初始化一个整型数组（未显示指定数组长度），循环输出数组中的每个元素。

#include <stdio.h>

int main(int argc, char** argv)
{
    int arr[] = {1,2,3,4,5};
    
    printf("sizeof(arr) = %lu\n", sizeof(arr));
    printf("sizeof(arr[0]) = %lu\n", sizeof(arr[0]));
    printf("sizeof(int) = %lu\n", sizeof(int));

    size_t len = sizeof(arr) / sizeof(int);

    size_t i;
    
    for (i = 0; i < len; ++i)
        printf("%d \n", arr[i]);

    return 0;
}