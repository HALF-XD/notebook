// 定义一个整型的一维数组，并打印数组中的元素。

#include <stdio.h>
#define LEN 5

int main(int argc, char** argv)
{
    int i;
    // int arr[] = {1, 2, 3, 4, 5};
    // int arr[LEN] = {1, 2, 3, 4, 5};
    
    int arr[LEN];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    for (i = 0; i < LEN; ++i){
        printf("%-4d", arr[i]);
    }
    printf("\n");
    
    return 0;
}