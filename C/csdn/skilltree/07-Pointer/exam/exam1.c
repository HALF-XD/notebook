// 给定一个数组，获取最大值及其下标并输出。
// 数组下标

#include<stdio.h>
#define LEN 10

int main(int argc, char** argv)
{
    int arr[LEN] = {7, 8, 2, 3, 4, 9, 0, 1, 6, 2};
    int i, max, index=0;

    max = arr[0];
    for(i=0;i<LEN;i++)
        if (arr[i] > max){
            max = arr[i];
            index = i;
        }

    printf("max: %d, index:  %d\n", max, index);
    return 0;
}