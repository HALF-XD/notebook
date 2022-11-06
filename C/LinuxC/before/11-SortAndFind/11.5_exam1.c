// 实现一个算法，在一组随机排列的数中找到最小的一个。
// 你能想到的最直观的算法一定也是Θ(n)的，有没有比Θ(n)更快的算法?

// O(n)的方法
// 求比O(n)更快的方法
#include <stdio.h>

#define LEN 8
int a[LEN] = {10, 5, 4, 7, 1, 3, 2, 6};

void find_min()
{
  int i, m = a[0], n = 0;
  for (i = 1; i < LEN; i++)
  {
    printf("1:%d\n", a[i]);
    if (m > a[i])
    {
      m = a[i];
      n = i;
    }

    printf("min:%d-index:%d\n", m, n);
  }
}

int main(void)
{
  find_min();
  return 0;
}