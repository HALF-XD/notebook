// ssort.c
#include <stdio.h>

static void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
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
