
// ex_in_function.c
#include <stdio.h>
#define ARR_LEN 10

void selection_sort(int array[], int len);

void print_array(int array[], int len)
{
    for (int i = 0; i < len; ++i)
        printf("%d ", array[i]);
    printf("\n");
}

int main()
{
    int i;
    int array[ARR_LEN] = {8, 1, 4, 10, 3, 6, 2, 7, 9, 5};
    selection_sort(array, ARR_LEN);

    return 0;
}