// ssort.c
#include <stdio.h>

static void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// print_array该函数为static声明为了静态函数，因此只能在本文件内调用，无法在其他文件内调用！
static void print_array(int array[], int len)
{
    for (int i = 0; i < len; ++i)
        printf("%d ", array[i]);
    printf("\n");
}

extern void selection_sort(int array[], int len) 
{
    int i,j,temp,min;
 
    for (i = 0 ; i < len - 1 ; ++i) 
    {
        min = i;
        for (j = i + 1; j < len; ++j)
            if (array[j] < array[min])
                min = j;
        if(min != i)
            swap(&array[min], &array[i]);
    }
}

