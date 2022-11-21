#include <stdio.h>

void test_arr()
{
  // 二维数组在内存的空间地址是连续的么？ C是
  int array[2][3] = {
      {0, 1, 2},
      {3, 4, 5}};
  printf("%p %p %p \n", &array[0][0], &array[0][1], &array[0][2]);
  printf("%p %p %p \n", &array[1][0], &array[1][1], &array[1][2]);
}

int main(void)
{
  test_arr();
}