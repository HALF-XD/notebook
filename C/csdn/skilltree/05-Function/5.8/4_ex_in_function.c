//ex_in_function.c
#include <stdio.h>
#define ARR_LEN 10

void selection_sort(int array[], int len);
void print_array(int array[], int len);

int main()
{
    int i;
    int array[ARR_LEN] = {8, 1, 4, 10, 3, 6, 2, 7, 9, 5};
    
    printf("排序前：\n");
    print_array(array, ARR_LEN);
    selection_sort(array, ARR_LEN);
    printf("排序后：\n");
    print_array(array, ARR_LEN);

    return 0;
}