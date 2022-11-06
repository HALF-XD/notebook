/* variable-length array (VLA) 变长数组
关于变长数组
变长数组中的“变”不是指可以修改已创建数组的大小，一旦创建了变长数组，它的大小则保持不变。
这里的“变”指的是：在创建数组时，可以使用变量指定数组的维度。
(普通数组只能用常量指定数组的维度)
1. 变长数组不能在定义的时候进行初始化； variable-sized object may not be initialized
2. 变长数组必须是自动存储类别，即不能使用extern或static存储类别说明符.
variable length array declaration cannot have 'static' storage duration
variable length array declaration cannot have 'extern' linkage
*/ 

// 定义并初始化整型的二维数组，求二维数组中所有元素的和。

#include <stdio.h>
#define ROWS 3
#define COLS 4

int sum_2d_array(int rows, int cols, int arr[rows][cols])
{
    int i, j, sum;
    sum = 0;
    for (i = 0; i < rows; ++i)
        for (j = 0; j < cols; ++j)
            sum += arr[i][j];

    return sum;
}

int main(int argc, char** argv)
{
    int i, j, rows, cols, sum;
    rows = 2, cols = 5;

    int arr_1[ROWS][COLS];
    for (i = 0; i < ROWS; ++i)
        for (j = 0; j < COLS; ++j)
            arr_1[i][j] = i * COLS + j + 1;
            
    int arr_2[rows][cols];
    for (i = 0; i < rows; ++i)
        for (j = 0; j < cols; ++j)
            arr_2[i][j] = i * cols + j + 1;

    sum = sum_2d_array(ROWS, COLS, arr_1);
    printf("array_1 中所有元素之和为: %d\n", sum);
    sum = sum_2d_array(rows, cols, arr_2);
    printf("array_2 中所有元素之和为: %d\n", sum);

    return 0;
}