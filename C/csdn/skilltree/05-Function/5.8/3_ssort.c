// ssort.c
#include <stdio.h>

void print_array(int array[], int len);

static void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int array[], int len) 
{
    int i,j,temp,min;
 
    printf("排序前：\n");
    print_array(array, len);
    for (i = 0 ; i < len - 1 ; ++i) 
    {
        min = i;
        for (j = i + 1; j < len; ++j)
            if (array[j] < array[min])
                min = j;
        if(min != i)
            swap(&array[min], &array[i]);
    }

    printf("排序后：\n");
    print_array(array, len);
}
