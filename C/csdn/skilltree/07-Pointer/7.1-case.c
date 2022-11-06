// 使用指针交换两个变量的值。
// incompatible integer to pointer conversion assigning to 'int *' from 'int'; take the address with &

#include <stdio.h>

int main(int argc, char** argv)
{
    int x, y;
    int* pt_x;
    int* pt_y;

    x = 2, y = 8;
    pt_x = &x;
    pt_y = &y;

    printf("交换前: x = %d, y = %d\n", x, y);
    
    int temp = *pt_x;
    *pt_x = *pt_y;
    *pt_y = temp;

    printf("交换后: x = %d, y = %d\n", x, y);

    return 0;
}