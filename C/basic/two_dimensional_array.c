#include <stdio.h>
// 用数组指针打印二维数组的元素

// int arr[5];          // arr是一个5个元素的整型数组。
// int* parr1[10];      // parr1是一个10个元素是int*的数组。
// int(*parr2)[10];     // parr2是一个指针，指向一个10个元素的整型数组。
// int(*parr3[10])[5];  // parr3是一个有10个元素数组，每个元素都是一个指向5个元素的整型数组。

void print(int (*p)[5], int x, int y)
{
  for (int i = 0; i < x; i++)
  {
    int j = 0;
    for (j = 0; j < y; j++)
    {
      printf("%d ", *(*(p + i) + j));
      printf("%d ", (*(p + i))[j]);
    }
    printf("\n");
  }
}

int main()
{
  int arr[3][5] = {{1, 2, 3, 4, 5}, {2, 3, 4, 5, 6}, {3, 4, 5, 6, 7}};
  print(arr, 3, 5);
  return 0;
}
