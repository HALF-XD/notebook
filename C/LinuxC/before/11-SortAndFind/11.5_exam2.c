// 在一组随机排列的数中找出第二小的，
// 这个问题比上一个稍复杂，你能不能想出Θ(n)的算法?
// O(n)的方法,比较三个数

#include <stdio.h>

#define LEN 8
int a[LEN] = {10, 5, 4, 7, 1, 3, 2, 6};

void find_min()
{
  int i;
  int m1 = a[0], n1 = 0; // 最小的
  int m2 = a[0], n2 = 0; // 第二小的
  for (i = 1; i < LEN; i++)
  {
    printf("1:%d\n", a[i]);
    // 比较三个数 默认：m2 > m1
    if (m1 > a[i]) // m2 > m1 > a[i]
    {
      m2 = m1, n2 = n1;
      m1 = a[i], n1 = i;
    }
    else if (a[i] > m2) // a[i] > m2 > m1
    {
      continue;
    }
    else if (m2 > a[i] && a[i] > m1) // m2 > a[i]  > m1
    {
      m2 = a[i], n2 = i;
    }
  }
  printf("final: min1:%d-index:%d\n", m1, n1);
  printf("final: min2:%d-index:%d\n", m2, n2);
}

int main(void)
{
  find_min();
  return 0;
}