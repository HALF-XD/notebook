// 求整形数组中的最大值，并输出其对应的下标。

#include <stdio.h>
#define LEN 10

int main(int argc, char **argv)
{
    int arr[LEN] = {2, 5, 1, 10, 4, 8, 6, 3, 9, 7};
    int i, j, max_value, position;

    max_value = arr[LEN - 1];
    for (i = 0; i < LEN - 1; ++i){
        printf("i: %d, arr[i]: %d\n",i, arr[i]);
        if (max_value < arr[i])
        {
            max_value = arr[i];
            position = i;
        }
    }
        
    printf("数组中的最大值为：%d\n", max_value);
    printf("最大值在数组中的下标为：%d\n", position);

    return 0;
}