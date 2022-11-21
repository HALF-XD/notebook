#include<stdio.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int len)
{
    int i, j;
    for (i=0; i<len-1; i++)
    {
        int min = i;
        for (j=i+1; j<len; j++)         // 走访未排序的元素
            if (arr[j] < arr[min])      // 找到目前最小值
                min = j;                // 记录最小值
        swap(&arr[min], &arr[i]);       // 做交换
    }
}

int main()
{
    return 0;
}