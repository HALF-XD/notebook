// 用冒泡排序法对整型数组按照从小到大的顺序进行升序排序。
// 冒泡排序中的核心操作之一是交换两个相邻元素的值。

#include <stdio.h>
#include <stdbool.h>
#define LEN 5

void bubbleSort(){
    int i, j, temp;
    bool is_sorted = false;
    int arr[LEN] = {33, 55, 22, 11, 44};

    for (i = 0; i < LEN - 1; ++i)
    {
        is_sorted = true;
        for (j = 0; j < LEN - i - 1; ++j)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                // arr[j] = arr[j] + arr[j + 1]; 
                // arr[j + 1] = arr[j] - arr[j + 1];
                // arr[j] = arr[j] - arr[j + 1];

                is_sorted = false;
            }
        if (is_sorted)
            break;
    }

    printf("升序排序后的顺序为：\n");
    for (i = 0; i < LEN; i++)
        printf("%-4d ", arr[i]);
    printf("\n");
}

int main(int argc, char** argv)
{
    bubbleSort();
    return 0;
}