// 给定一个整型数组，将数组中的元素进行反转，并重新写入原数组中，例如：
// 反转前： 1, 2, 3, 4, 5
// 反转后： 5, 4, 3, 2, 1

#include <stdio.h>
#define ARR_LEN 5

void print_array(int arr[], int len)
{
    int i;
    for (i = 0; i != len - 1; ++i)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[len - 1]);
}

int main(int argc, char** argv)
{
    int a[ARR_LEN] = {1, 2, 3, 4, 5};
    int i;

    printf("反转前：\n");
    print_array(a, ARR_LEN);

    for (i = 0; i != ARR_LEN / 2; ++i)
    {
        int temp = a[i];
        a[i] = a[ARR_LEN - i - 1];
        a[ARR_LEN - i - 1] = temp;
    }
    
    printf("反转后：\n");
    print_array(a, ARR_LEN);

    return 0;
}